// ---------------------------------------------------------------------------
//
// <sensor>.h
// This is the base class for all <sensor>s
//
//
// Author: Dan Mahoney
// ---------------------------------------------------------------------------
#ifndef sensor_H
#define sensor_H

// include directives

// declarations

class Sensor {
public:
    Sensor();
    ~Sensor();
    void getData();
    void getDataFormat();
};

#endif
