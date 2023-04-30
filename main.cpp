#include <iostream>

#include "./lib_1/Bus.h"
#include "./lib_1/AirBus.h"
#include "./lib_1/Truck.h"
#include "./lib_1/CargoPlane.h"

#include "./lib_2/AirT.h"
#include "./lib_2/MotorT.h"
#include "./lib_2/CargoTransportation.h"
#include "./lib_2/PassengerTransportation.h"

int main() {
    system("chcp 65001");

    Transport* transport_1;
    Transport* transport_2;
    transport_1 = new Bus();
    transport_2 = new CargoPlane();

    (dynamic_cast<IPassengerTransportation*>(transport_1))->Boarding();
    transport_1->Move();
    (dynamic_cast<IPassengerTransportation*>(transport_1))->Unboarding();

    cout << "---" << endl;

    (dynamic_cast<ICargoTransportation*>(transport_2))->Loading();
    transport_2->Move();
    (dynamic_cast<ICargoTransportation*>(transport_2))->Unloading();

    cout << endl << "=== === ===" << endl;

    ATransport* transport_3;
    ATransport* transport_4;

    transport_3 = new MotorT(new CargoTransportation());
    transport_4 = new AirT(new PassengerTransportation());

    transport_3->typeTransportation->Loading();
    transport_3->Move();
    transport_3->typeTransportation->Unloading();

    cout << "---" << endl;

    transport_4->typeTransportation->Loading();
    transport_4->Move();
    transport_4->typeTransportation->Unloading();

    return 0;
}
