#ifndef BRIDGEDEMO_AIRT_H
#define BRIDGEDEMO_AIRT_H

#include <iostream>

#include "ATransport.h"

using namespace std;

class AirT : public ATransport {
public:
    explicit AirT(ITypeTransportation *typeTransportation) : ATransport(typeTransportation) {}

    void Move() override {
        cout << "Летим" << endl;
    }
};


#endif //BRIDGEDEMO_AIRT_H
