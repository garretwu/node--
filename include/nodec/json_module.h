#ifndef _NODEC_JSON_MODULE_H_
#define _NODEC_JSON_MODULE_H_

#include "module.h"
#include "string.h"

namespace nodec {

class JSONModule : public Module {
public:
    Value parse(Object);
    String stringify(Value);
};

}

#endif // _NODEC_JSON_MODULE_H_
