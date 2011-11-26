#ifndef _NODEC_HTTP_MODULE_H_
#define _NODEC_HTTP_MODULE_H_

#include "module.h"
#include "string.h"
#include "url.h"

namespace nodec {

class HTTPModule : public Module {
    Server* createServer();
};

}

#endif // _NODEC_HTTP_MODULE_H_
