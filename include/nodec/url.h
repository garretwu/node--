#ifndef _NODEC_URL_H_
#define _NODEC_URL_H_

#include "string.h"

namespace nodec {

class Url : public Object {
public:
    String getHref();
    String getProtocol();
    String getHost();
    String getAuth();
    String getHostName();
    String getPort();
    String getPathName();
    String getSearch();
    String getPath();
    String getQuery();
    String getHash(); 
};

}

#endif // _NODEC_URL_H_
