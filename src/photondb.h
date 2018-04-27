/*********************************/
/* Codu07                        */
/* Email: wtzhuque@163.com       */
/*********************************/

#ifndef CODU_PHOTONDB_H
#define CODU_PHOTONDB_H

#include <vector>
#include <memory>

#include "options.h"

namespace codu {

class Segment;
class Channel;

class PhotonDB {
public:
    static PhotonDB& instance();

public:
    PhotonDB();

    ~PhotonDB();

    int init(const Options& options);

    int destroy();

    int get(const Key* key, Value* value);

    int put(const Record* record);

    int mget(const KeySet* key_set, ValueSet* value);

    int mput(const RecordSet* records);

private:
    std::vector<std::shared_ptr<Segment>> _segments;
    std::vector<std::shared_ptr<Channel>> _channels;
}; // class PhotonDB

} // namespace codu

#endif // CODU_PHOTONDB_H
