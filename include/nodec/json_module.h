#ifndef _NODEC_JSON_MODULE_H_
#define _NODEC_JSON_MODULE_H_

#include "singleton.h"
#include "value.h"
#include "string.h"

namespace nodec {

class JsonModule : public Singleton<JsonModule> {
    SINGLETON_CONSTRUCTOR(JsonModule);

public:
    Value parse(Object*);
    String stringify(Value);
};

}

#endif // _NODEC_JSON_MODULE_H_
