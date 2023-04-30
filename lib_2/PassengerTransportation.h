#ifndef BRIDGEDEMO_PASSENGERTRANSPORTATION_H
#define BRIDGEDEMO_PASSENGERTRANSPORTATION_H

#include <iostream>

#include "ITypeTransportation.h"

using namespace std;

class PassengerTransportation : public ITypeTransportation {
public:
    void Loading() override {
        cout << "Посадка пассажиров" << endl;
    }

    void Unloading() override {
        cout << "Высадка пассажиров" << endl;
    }
};


#endif //BRIDGEDEMO_PASSENGERTRANSPORTATION_H
