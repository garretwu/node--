#ifndef _NODEC_URL_MODULE_H_
#define _NODEC_URL_MODULE_H_

#include "singleton.h"
#include "string.h"
#include "url.h"

namespace nodec {

class UrlModule : public Singleton<UrlModule> {
    SINGLETON_CONSTRUCTOR(UrlModule);

public:
    Url* parse(const String&, bool, bool);
    String format(const Url&);
    
    // TODO: resolve
};

}

#endif // _NODEC_URL_MODULE_H_
