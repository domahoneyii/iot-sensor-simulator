// ---------------------------------------------------------------------------
//
// tempDataGenerator.cpp
// This is the base class for all TempDataGenerator's
//
//
// Author: Dan Mahoney
// ---------------------------------------------------------------------------

#include <iostream>
#include <string>
#include "tempDataGenerator.h"

using namespace std;

TempDataGenerator::TempDataGenerator(string apiKeyIn, float latitudeIn, float longitudeIn) {
    apiKey = apiKeyIn;
    latitude = latitudeIn;
    longitude = longitudeIn;

    cout << "ApiKey = " << apiKey;
    cout << "lat = " << latitude;
    cout << "long = " << longitude;
}

