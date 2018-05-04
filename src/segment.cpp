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

int Segment::init(const std::string& /*data_file*/) {
    return 0;
}

int Segment::destroy() {
    return 0;
}

int Segment::dump(const std::string& /*data_file*/) {
    return 0;
}

int Segment::get(const Key* key, Value* value) {
    auto iter = _data.find(key->key());
    if (iter != _data.end()) {
        value->set_value(iter->second);
        return 0;
    } else {
        return 1;
    }
}

int Segment::put(const Record* record) {
    _data[record->key()] = record->value();
    return 0;
}

} // namespace codu
