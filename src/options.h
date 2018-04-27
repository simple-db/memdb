/*********************************/
/* Codu07                        */
/* Email: wtzhuque@163.com       */
/*********************************/

#ifndef CODU_OPTIONS_H
#define CODU_OPTIONS_H

namespace codu {

class Options {
public:
    /**
     * num of r/w channels
     */
    int channel_num {4};

    /**
     * num of data partitions
     */
    int segment_num {64};
}; // class Options

} // namespace codu

#endif // CODU_OPTIONS_H
