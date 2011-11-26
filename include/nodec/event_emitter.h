#ifndef _NODEC_EVENT_EMITTER_H_
#define _NODEC_EVENT_EMITTER_H_

#include "object.h"

namespace nodec {

class EventEmitter : public Object {

public:
    virtual void addListener(const String& event, const Function& func);
    virtual void on(const String& event, const Function& func);
    virtual void once(const String& event, const Function& func);
    virtual void removeListerner(const String& event, const Function& func);
    virtual void removeAllListener();
    virtual void removeAllListener(const String& event);
    virtual void listeners(const String& event);
    virtual void emit(const String&, Array& args);
};

}

#endif // _NODEC_EVENT_EMITTER_H_
