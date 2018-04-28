/*********************************/
/* Codu07                        */
/* Email: wtzhuque@163.com       */
/*********************************/

#include "netio.h"

#include "photondb.h"

namespace codu {

MemDBService::MemDBService() {
}

MemDBService::~MemDBService() {
}

void MemDBService::get(::google::protobuf::RpcController* controller,
                       const ::codu::Key* key,
                       ::codu::Status* status,
                       ::google::protobuf::Closure* done) {
    PhotonDB& db = PhotonDB::instance();
    int ret = db.get(key, status, [done](void){done->Run();});
    if (ret != 0) {
    }
}

void MemDBService::set(::google::protobuf::RpcController* controller,
                       const ::codu::Record* record,
                       ::codu::Status* status,
                       ::google::protobuf::Closure* done) {
    PhotonDB& db = PhotonDB::instance();
    int ret = db.set(record, status, [done](void){done->Run();});
    if (ret != 0) {
    }
}

void MemDBService::mget(::google::protobuf::RpcController* controller,
                        const ::codu::KeySet* key_set,
                        ::codu::Status* status,
                        ::google::protobuf::Closure* done) {
    PhotonDB& db = PhotonDB::instance();
    int ret = db.mget(key_set, status, [done](void){done->Run();});
    if (ret != 0) {
    }
}

void MemDBService::mset(::google::protobuf::RpcController* controller,
                        const ::codu::RecordSet* record_set,
                        ::codu::Status* status,
                        ::google::protobuf::Closure* done) {
    PhotonDB& db = PhotonDB::instance();
    int ret = db.mset(record_set, status, [done](void){done->Run();});
    if (ret != 0) {
    }
}

} // namespace codu
