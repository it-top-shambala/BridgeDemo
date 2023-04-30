#ifndef BRIDGEDEMO_AIRBUS_H
#define BRIDGEDEMO_AIRBUS_H

#include "AirTransport.h"
#include "IPassengerTransportation.h"

class AirBus : public AirTransport, public IPassengerTransportation {
public:
    void Boarding() override {
        cout << "Посадка пассажиров в самолёт" << endl;
    }

    void Unboarding() override {
        cout << "Высадка пассажиров из самолёта" << endl;
    }
};


#endif //BRIDGEDEMO_AIRBUS_H
