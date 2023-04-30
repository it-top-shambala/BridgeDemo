#ifndef BRIDGEDEMO_MOTORTRANSPORT_H
#define BRIDGEDEMO_MOTORTRANSPORT_H

#include <iostream>

#include "Transport.h"

using namespace std;

class MotorTransport : public Transport {
public:
    void Move() override {
        cout << "Едем по автомобильной дороге" << endl;
    }
};


#endif //BRIDGEDEMO_MOTORTRANSPORT_H
