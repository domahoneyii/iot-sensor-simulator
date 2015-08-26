// ---------------------------------------------------------------------------
//
// TempDataGenerator.h
// This is the class for the TempDataGenerators
//
// It use openweathermap.org to get tempurature data for a given location
//
//
// Author: Dan Mahoney
// ---------------------------------------------------------------------------
#ifndef TempDataGenerator_H
#define TempDataGenerator_H

// include directives
#include <string>
#include "dataGenerator.h"

using namespace std;

// declarations

class TempDataGenerator : DataGenerator {
public:
    TempDataGenerator(string apiKeyIn, float latitudeIn, float longitudeIn);

private:
    string apiKey;
    float latitude;
    float longitude;
};

#endif
