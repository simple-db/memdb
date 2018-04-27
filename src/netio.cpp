/*********************************/
/* Codu07                        */
/* Email: wtzhuque@163.com       */
/*********************************/

#include "netio.h"

namespace codu {

MemDBService::MemDBService() {
}

MemDBService::~MemDBService() {
}

void MemDBService::get(::google::protobuf::RpcController* controller,
                       const ::codu::Key* request,
                       ::codu::Status* response,
                       ::google::protobuf::Closure* done) {
}

void MemDBService::set(::google::protobuf::RpcController* controller,
                       const ::codu::Record* request,
                       ::codu::Status* response,
                       ::google::protobuf::Closure* done) {
}

void MemDBService::mget(::google::protobuf::RpcController* controller,
                        const ::codu::KeySet* request,
                        ::codu::Status* response,
                        ::google::protobuf::Closure* done) {
}

void MemDBService::mset(::google::protobuf::RpcController* controller,
                        const ::codu::RecordSet* request,
                        ::codu::Status* response,
                        ::google::protobuf::Closure* done) {
}

} // namespace codu
