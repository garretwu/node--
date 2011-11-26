#ifndef _NODEC_URL_MODULE_H_
#define _NODEC_URL_MODULE_H_

#include "module.h"
#include "string.h"
#include "url.h"

namespace nodec {

class URLModule : public Module {
public:
    URL* parse(const String&, bool, bool);
    String format(const URL&);
    
    // TODO: resolve
};

}

#endif // _NODEC_URL_MODULE_H_
