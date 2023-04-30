#ifndef BRIDGEDEMO_CARGOPLANE_H
#define BRIDGEDEMO_CARGOPLANE_H

#include "AirTransport.h"
#include "ICargoTransportation.h"

class CargoPlane : public AirTransport, public ICargoTransportation {
public:
    void Loading() override {
        cout << "Погзка груза в самолёт" << endl;
    }

    void Unloading() override {
        cout << "Разгрузка груза из самолёта" << endl;
    }
};


#endif //BRIDGEDEMO_CARGOPLANE_H
