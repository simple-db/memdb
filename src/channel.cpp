/*********************************/
/* Codu07                        */
/* Email: wtzhuque@163.com       */
/*********************************/

#include "channel.h"

#include "segment.h"

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
            std::bind(&Channel::do_get, this, key, status, seg_id, closure)
            );
    return execution_queue_execute(_exec_queue, task_ptr);
}

int Channel::put(const Record* record,
                 Status* status,
                 size_t seg_id,
                 Closure closure) {
    auto task_ptr = std::make_shared<Closure>(
            std::bind(&Channel::do_put, this, record, status, seg_id, closure)
            );
    return execution_queue_execute(_exec_queue, task_ptr);
}

void Channel::do_get(const Key* key,
                     Status* status,
                     size_t seg_id,
                     Closure closure) {
    Value* value = status->add_values();
    int ret = _db->_segments[seg_id]->get(key, value);
    if (ret != 0) {
        status->clear_values();
    }
    status->set_error(ret);
    closure();
}

void Channel::do_put(const Record* record,
                     Status* status,
                     size_t seg_id,
                     Closure closure) {
    int ret = _db->_segments[seg_id]->put(record);
    status->set_error(ret);
    closure();
}

} // namespace codu
