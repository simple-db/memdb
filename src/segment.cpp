/*********************************/
/* Codu07                        */
/* Email: wtzhuque@163.com       */
/*********************************/

#include "segment.h"

namespace codu {

Segment::Segment() {
}
   
Segment::~Segment() {
}

int Segment::init() {
    return 0;
}

int Segment::init(const std::string& data_file) {
    return 0;
}

int Segment::destroy() {
    return 0;
}

int Segment::dump(const std::string& data_file) {
    return 0;
}

int Segment::get(const Key* key, Value* value) {
    return 0;
}

int Segment::put(const Record* record) {
    return 0;
}

} // namespace codu
