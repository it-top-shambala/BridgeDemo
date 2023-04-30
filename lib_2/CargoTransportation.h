#ifndef BRIDGEDEMO_CARGOTRANSPORTATION_H
#define BRIDGEDEMO_CARGOTRANSPORTATION_H

#include <iostream>

#include "ITypeTransportation.h"

using namespace std;

class CargoTransportation : public ITypeTransportation {
public:
    void Loading() override {
        cout << "Погрузка груза" << endl;
    }

    void Unloading() override {
        cout << "Выгрузка груза" << endl;
    }
};


#endif //BRIDGEDEMO_CARGOTRANSPORTATION_H
