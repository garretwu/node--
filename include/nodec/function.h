#ifndef _NODEC_FUNCTION_H_
#define _NODEC_FUNCTION_H_

#include "object.h"

namespace nodec {

class Function : public Object {
public:
    virtual Value invoke(Array& args) = 0;
};

}

#endif // _NODEC_FUNCTION_H_
