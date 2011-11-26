#ifndef _NODEC_HTTP_MODULE_H_
#define _NODEC_HTTP_MODULE_H_

#include "module.h"
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

#endif // _NODEC_HTTP_MODULE_H_
