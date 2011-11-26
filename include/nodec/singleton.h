#ifndef _NODEC_SINGLETON_H_
#define _NODEC_SINGLETON_H_

#include "object.h"

namespace nodec {

template<class T>
class Singleton : public Object {
private:
    static T* instance_;

public:
    static T* getInstance() {
        if (!instance_)
            instance_ = new T;
        return instance_;
    }

protected:
    Singleton() {}

private:
    Singleton(const Singleton&);
    Singleton& operator=(const Singleton&);
};

#define SINGLETON_CONSTRUCTOR(T) \
private: \
    friend class Singleton<T>; \
    T() : Singleton<T>() {}

}

#endif // _NODEC_SINGLETON_H_
