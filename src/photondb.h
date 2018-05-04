/*********************************/
/* Codu07                        */
/* Email: wtzhuque@163.com       */
/*********************************/

#ifndef CODU_PHOTONDB_H
#define CODU_PHOTONDB_H

#include <vector>
#include <memory>
#include <functional>

#include "options.h"
#include "memdb.pb.h"

namespace codu {

class Segment;
class Channel;
typedef std::function<void()> Closure;

class PhotonDB {
public:
    friend class Channel;
public:
    static PhotonDB& instance();

public:
    PhotonDB();

    ~PhotonDB();

    int init(const Options& options);

    int destroy();

    int get(const Key* key, Status* status, Closure done);

    int set(const Record* record, Status* status, Closure done);

    int mget(const KeySet* key_set, Status* status, Closure done);

    int mset(const RecordSet* records, Status* status, Closure done);

private:
    void single_op_done();

    void multip_op_done();

    size_t get_segment_id(const Key* key);

    size_t get_channel_id(size_t seg_id);

private:
    std::vector<std::shared_ptr<Segment>> _segments;
    std::vector<std::shared_ptr<Channel>> _channels;
}; // class PhotonDB

} // namespace codu

#endif // CODU_PHOTONDB_H
