/*********************************/
/* Codu07                        */
/* Email: wtzhuque@163.com       */
/*********************************/

#include "photondb.h"
#include "options.h"

namespace codu {

int run(int argc, char** argv) {

    PhotonDB db;
    Options options;

    int ret = db.init(options);
    if (ret != 0) {
        return ret;
    }

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
