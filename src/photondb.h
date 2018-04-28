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

    int get(const Key* key, Value* value, std::function<void()>* done);

    int put(const Record* record, std::function<void()>* done);

    int mget(const KeySet* key_set, ValueSet* value, std::function<void()>* done);

    int mput(const RecordSet* records, std::function<void()>* done);

private:
    void single_op_done();

    void multip_op_done();

private:
    std::vector<std::shared_ptr<Segment>> _segments;
    std::vector<std::shared_ptr<Channel>> _channels;
}; // class PhotonDB

} // namespace codu

#endif // CODU_PHOTONDB_H
