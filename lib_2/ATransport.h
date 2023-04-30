#ifndef BRIDGEDEMO_ATRANSPORT_H
#define BRIDGEDEMO_ATRANSPORT_H

#include "ITypeTransportation.h"

class ATransport {
public:
    ITypeTransportation* typeTransportation;
    virtual void Move() = 0;

protected:
    explicit ATransport(ITypeTransportation *typeTransportation) : typeTransportation(typeTransportation) {}
};


#endif //BRIDGEDEMO_ATRANSPORT_H
