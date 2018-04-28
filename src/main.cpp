/*********************************/
/* Codu07                        */
/* Email: wtzhuque@163.com       */
/*********************************/

#include <gflags/gflags.h>
#include <brpc/server.h>

#include "photondb.h"
#include "netio.h"
#include "options.h"

DEFINE_int32(port, 8000, "service port");

namespace codu {

int run(int argc, char** argv) {
    google::ParseCommandLineFlags(&argc, &argv, true);


    PhotonDB& db = PhotonDB::instance();
    Options db_options;

    int ret = db.init(db_options);
    if (ret != 0) {
        return ret;
    }
    
    brpc::Server server;
    MemDBService service;

    if (server.AddService(&service, brpc::SERVER_DOESNT_OWN_SERVICE) != 0) {
        fprintf(stderr, "Failed to add service\n");
        return -1;
    }

    brpc::ServerOptions server_options;
    if (server.Start(FLAGS_port, &server_options) != 0) {
        fprintf(stderr, "Failed to start service\n");
        return -1;
    }

    server.RunUntilAskedToQuit();

    ret = db.destroy();
    if (ret != 0) {
        return ret;
    }

    return 0;
}

} // namespace codu

int main(int argc, char** argv) {
    return codu::run(argc, argv);
}
