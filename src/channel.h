/*********************************/
/* Codu07                        */
/* Email: wtzhuque@163.com       */
/*********************************/

#ifndef CODU_CHANNEL_H
#define CODU_CHANNEL_H

#include <memory>

#include <bthread/execution_queue.h>

#include "photondb.h"

namespace codu {

class Channel {
public:
    Channel(PhotonDB* db);

    ~Channel();

    int get(const Key* key, Status* status, size_t seg_id, Closure closure);

    int put(const Record* record, Status* status, size_t seg_id, Closure closure);

private:
    void do_get(const Key* key, Status* status, size_t seg_id, Closure closure);

    void do_put(const Record* record, Status* status, size_t seg_id, Closure closure);

private:
    PhotonDB* _db {nullptr};
    ::bthread::ExecutionQueueId<std::shared_ptr<Closure>> _exec_queue;
}; // class Channel

} // namespace codu

#endif // CODU_CHANNEL_H
