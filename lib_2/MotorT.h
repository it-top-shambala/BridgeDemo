#ifndef BRIDGEDEMO_MOTORT_H
#define BRIDGEDEMO_MOTORT_H

#include <iostream>

#include "ATransport.h"

using namespace std;

class MotorT : public ATransport {
public:
    explicit MotorT(ITypeTransportation *typeTransportation) : ATransport(typeTransportation) {}

    void Move() override {
        cout << "Едем по автомобильной дороге" << endl;
    }
};


#endif //BRIDGEDEMO_MOTORT_H
