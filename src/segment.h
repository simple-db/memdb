/*********************************/
/* Codu07                        */
/* Email: wtzhuque@163.com       */
/*********************************/

#ifndef CODU_SEGMENT_H
#define CODU_SEGMENT_H

#include <sparsehash/sparse_hash_map>
#include "memdb.pb.h"

namespace codu {

class Segment {
public:
    Segment();

    ~Segment();

    int init();

    int init(const std::string& data_file);

    int destroy();

    int dump(const std::string& data_file);

    int get(const Key* key, Value* value);

    int put(const Record* record);
private:
    ::google::sparse_hash_map<std::string, std::string> _data;
}; // class Segment

} // namespace codu

#endif // CODU_SEGMENT_H
