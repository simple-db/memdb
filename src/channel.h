/*********************************/
/* Codu07                        */
/* Email: wtzhuque@163.com       */
/*********************************/

#ifndef CODU_CHANNEL_H
#define CODU_CHANNEL_H

#include <memory>

#include "photondb.h"

namespace codu {

class Channel {
public:
    Channel(PhotonDB* db);

    ~Channel();

    void get(const Key* key, Value* value, std::function<void()>* closure);

    void put(const Record* record, std::function<void()>* closure);

private:
    PhotonDB* _db {nullptr};
}; // class Channel

} // namespace codu

#endif // CODU_CHANNEL_H
