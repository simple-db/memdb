/*********************************/
/* Codu07                        */
/* Email: wtzhuque@163.com       */
/*********************************/

#include "channel.h"

namespace codu {

Channel::Channel(PhotonDB* db)
    : _db(db) {
}

Channel::~Channel() {
}

int Channel::get(const Key* key,
                 Status* status,
                 size_t seg_id,
                 Closure closure) {
    auto task_ptr = std::make_shared<Closure>(
            std::bind(&Channel::do_get, this, key, status, closure)
            );
    execution_queue_execute(_exec_queue, task_ptr);
}

int Channel::put(const Record* record,
                 Status* status,
                 size_t seg_id,
                 Closure closure) {
    auto task_ptr = std::make_shared<Closure>(
            std::bind(&Channel::do_put, this, record, status, closure)
            );
    execution_queue_execute(_exec_queue, task_ptr);
}

void Channel::do_get(const Key* key,
                     Status* status,
                     size_t seg_id,
                     Closure closure) {
    std::shared_ptr<Segment> seg = _db->_segments[seg_id];

}

void Channel::do_put(const Record* record,
                     Status* status,
                     size_t seg_id,
                     Closure closure) {
}

} // namespace codu
