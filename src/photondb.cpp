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
    return 0;
}
    
int PhotonDB::destroy() {
    return 0;
}

int PhotonDB::get() {
    return 0;
}

int PhotonDB::put() {
    return 0;
}

int PhotonDB::mget() {
    return 0;
}

int PhotonDB::mput() {
    return 0;
}

} // namespace codu
