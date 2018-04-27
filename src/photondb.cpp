/*********************************/
/* Codu07                        */
/* Email: wtzhuque@163.com       */
/*********************************/

#include "photondb.h"

namespace {
    static ::codu::PhotonDB g_instance;
}

namespace codu {

PhotonDB::PhotonDB() {
}

PhotonDB::~PhotonDB() {
}

PhotonDB& PhotonDB::instance() {
    return g_instance;
}
   
int PhotonDB::init(const Options& options) {
    // init segments
    // TODO: load segments from existing data file
    for (int i = 0; i < options.segment_num; ++i) {
        _segments.emplace_back(std::make_shared<Segment>());
    }

    // init channels
    for (int i = 0; i < options.channel_num; ++i) {
        _channels.emplace_back(std::make_shared<Channel>());
    }

    return 0;
}
    
int PhotonDB::destroy() {
    return 0;
}

int PhotonDB::get(const Key* key, Value* value) {

    return 0;
}

int PhotonDB::put(const Record* record) {
    return 0;
}

int PhotonDB::mget(const KeySet* key_set, ValueSet* value) {
    return 0;
}

int PhotonDB::mput(const RecordSet* records) {
    return 0;
}

} // namespace codu
