#ifndef _NODEC_SERVER_H_
#define _NODEC_SERVER_H_

#include "value.h"
#include "string.h"
#include "url.h"

namespace nodec {

class Server : public Object {
public:
    void listen(int);
    void listen(const String&);
    void close();
};

}

#endif // _NODEC_SERVER_H_
