// ---------------------------------------------------------------------------
//
// <ExternalDataProcessor>.h
// This is the base class for all <ExternalDataProcessor>s
//
//
// Author: Dan Mahoney
// ---------------------------------------------------------------------------
#ifndef ExternalDataProcessor_H
#define ExternalDataProcessor_H

// include directives

// declarations

class ExternalDataProcessor {
public:
    ExternalDataProcessor();
    ~ExternalDataProcessor();
    void getData();
    void getDataFormat();
};

#endif
