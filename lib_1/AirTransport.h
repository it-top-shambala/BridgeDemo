#ifndef BRIDGEDEMO_AIRTRANSPORT_H
#define BRIDGEDEMO_AIRTRANSPORT_H

#include <iostream>

#include "Transport.h"

using namespace std;

class AirTransport : public Transport {
public:
    void Move() override {
        cout << "Летим" << endl;
    }
};


#endif //BRIDGEDEMO_AIRTRANSPORT_H
