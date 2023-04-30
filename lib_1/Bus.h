#ifndef BRIDGEDEMO_BUS_H
#define BRIDGEDEMO_BUS_H

#include "MotorTransport.h"
#include "IPassengerTransportation.h"

class Bus : public MotorTransport, public IPassengerTransportation {
public:
    void Boarding() override {
        cout << "Посадка пассажиров в автобус" << endl;
    }

    void Unboarding() override {
        cout << "Высадка пассажиров из автобуса" << endl;
    }
};


#endif //BRIDGEDEMO_BUS_H
