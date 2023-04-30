#ifndef BRIDGEDEMO_ICARGOTRANSPORTATION_H
#define BRIDGEDEMO_ICARGOTRANSPORTATION_H


class ICargoTransportation {
public:
    virtual void Loading() = 0;
    virtual void Unloading() = 0;
};


#endif //BRIDGEDEMO_ICARGOTRANSPORTATION_H
