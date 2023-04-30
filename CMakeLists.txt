cmake_minimum_required(VERSION 3.25)
project(BridgeDemo)

set(CMAKE_CXX_STANDARD 17)

add_executable(BridgeDemo main.cpp lib_1/Transport.h lib_1/MotorTransport.h lib_1/AirTransport.h lib_1/ICargoTransportation.h lib_1/IPassengerTransportation.h lib_1/Bus.h lib_1/AirBus.h lib_1/Truck.h lib_1/CargoPlane.h lib_2/ATransport.h lib_2/ITypeTransportation.h lib_2/MotorT.h lib_2/AirT.h lib_2/PassengerTransportation.h lib_2/CargoTransportation.h)
