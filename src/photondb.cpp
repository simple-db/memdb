/*********************************/
/* Codu07                        */
/* Email: wtzhuque@163.com       */
/*********************************/

#include "photondb.h"

#include "channel.h"
#include "segment.h"

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
        _channels.emplace_back(std::make_shared<Channel>(this));
    }

    return 0;
}
    
int PhotonDB::destroy() {
    return 0;
}

int PhotonDB::get(const Key* key,
                  Status* status,
                  std::function<void()> done) {
    size_t seg_id = get_segment_id(key);
    size_t chan_id = get_channel_id(seg_id);

    _channels[chan_id]->get(key, status, done);

    return 0;
}

int PhotonDB::set(const Record* record,
                  Status* status,
                  std::function<void()> done) {
    return 0;
}

int PhotonDB::mget(const KeySet* key_set,
                   Status* status,
                   std::function<void()> done) {
    return 0;
}

int PhotonDB::mset(const RecordSet* records,
                   Status* status,
                   std::function<void()> done) {
    return 0;
}

void PhotonDB::single_op_done() {
}

void PhotonDB::multip_op_done() {
}

size_t PhotonDB::get_segment_id(const Key* key) {
    return 0;
}

size_t PhotonDB::get_channel_id(size_t seg_id) {
    return 0;
}

} // namespace codu
