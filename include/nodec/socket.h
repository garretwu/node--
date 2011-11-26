#ifndef _NODEC_SOCKET_H_
#define _NODEC_SOCKET_H_

#include "event_emitter.h"

namespace nodec {

class Socket : public EventEmitter {
public:
    void connect(int);
    void write(const String&);
    // and so on
};

}

#endif // _NODEC_SOCKET_H_
