/*********************************/
/* Codu07                        */
/* Email: wtzhuque@163.com       */
/*********************************/

#include <gflags/gflags.h>
#include <brpc/channel.h>

#include "memdb.pb.h"

DEFINE_string(server, "127.0.0.1:8500", "IP address of server");
DEFINE_string(load_balancer, "", "The algorithm for load balancing");
DEFINE_int32(timeout_ms, 100, "RPC timeout in milliseconds");
DEFINE_int32(max_retry, 3, "Max retries(not including the first RPC)"); 

namespace codu {

int run(int argc, char** argv) {
    ::google::ParseCommandLineFlags(&argc, &argv, true);
    
    brpc::Channel channel;
    brpc::ChannelOptions options;
    options.timeout_ms = FLAGS_timeout_ms;
    options.max_retry = FLAGS_max_retry;
    if (channel.Init(FLAGS_server.c_str(), FLAGS_load_balancer.c_str(), &options) != 0) {
        fprintf(stderr, "init channel failed\n");
        return -1;
    }
    
    DBService_Stub stub(&channel);

    brpc::Controller cntl;
    Key key;
    Status status;
    Record record;

    key.set_key("test");
    stub.get(&cntl, &key, &status, NULL);

    if (cntl.Failed()) {
        fprintf(stderr, "get failed: %s\n", cntl.ErrorText().c_str());
    }

    return 0;
}

} // namespace codu

int main(int argc, char** argv) {
    return ::codu::run(argc, argv);
}
