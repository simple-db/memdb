/*********************************/
/* Codu07                        */
/* Email: wtzhuque@163.com       */
/*********************************/

#ifndef CODU_NETIO_H
#define CODU_NETIO_H

#include "memdb.pb.h"

namespace codu {

class MemDBService : public DBService {
public:
    MemDBService();

    ~MemDBService();

    virtual void get(::google::protobuf::RpcController* controller,
                     const ::codu::Key* request,
                     ::codu::Status* response,
                     ::google::protobuf::Closure* done);

    virtual void set(::google::protobuf::RpcController* controller,
                     const ::codu::Record* request,
                     ::codu::Status* response,
                     ::google::protobuf::Closure* done);

    virtual void mget(::google::protobuf::RpcController* controller,
                      const ::codu::KeySet* request,
                      ::codu::Status* response,
                      ::google::protobuf::Closure* done);

    virtual void mset(::google::protobuf::RpcController* controller,
                      const ::codu::RecordSet* request,
                      ::codu::Status* response,
                      ::google::protobuf::Closure* done);
}; // class MemDBService

} // namespace codu

#endif // CODU_NETIO_H
