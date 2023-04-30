#ifndef BRIDGEDEMO_TRUCK_H
#define BRIDGEDEMO_TRUCK_H

#include "MotorTransport.h"
#include "ICargoTransportation.h"

class Truck : public MotorTransport, public ICargoTransportation {
public:
    void Loading() override {
        cout << "Загрузка груза в автомобиль" << endl;
    }

    void Unloading() override {
        cout << "Выгрузка груза из автомобиля" << endl;
    }
};


#endif //BRIDGEDEMO_TRUCK_H
