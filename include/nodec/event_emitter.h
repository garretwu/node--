#ifndef _NODEC_EVENT_EMITTER_H_
#define _NODEC_EVENT_EMITTER_H_

#include "string.h"
#include "function.h"
#include "array.h"

namespace nodec {

class EventEmitter : public Object {
public:
    void addListener(const String& event, const Function& func);
    void on(const String& event, const Function& func);
    void once(const String& event, const Function& func);
    void removeListerner(const String& event, const Function& func);
    void removeAllListener();
    void removeAllListener(const String& event);
    void emit(const String&, Array& args);
    Array* listeners(const String& event);
};

}

#endif // _NODEC_EVENT_EMITTER_H_
