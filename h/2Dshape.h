#ifndef _2DSHAPE_H_
#define _2DSHAPE_H_

#include <iostream>
#include <math.h>
class _2Dshape
{
public:
    _2Dshape(const char* _name, size_t z):name{_name},noOfSides{z}{};
    virtual double perimeter() = 0;
    virtual double area() = 0;
    virtual void disp() = 0;
    const char* getName();
    
private:    
    const char* name; 
    size_t noOfSides;
};

#endif
