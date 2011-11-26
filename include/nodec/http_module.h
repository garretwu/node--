#ifndef _NODEC_HTTP_MODULE_H_
#define _NODEC_HTTP_MODULE_H_

#include "singleton.h"
#include "server.h"

namespace nodec {

class HttpModule : public Singleton<HttpModule> {
    SINGLETON_CONSTRUCTOR(HttpModule);

public:
    Server* createServer();
};

}

#endif // _NODEC_HTTP_MODULE_H_
