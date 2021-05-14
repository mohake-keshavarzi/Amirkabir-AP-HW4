#ifndef _3DSHAPE_H_
#define _3DSHAPE_H_

#include <iostream>
#include "2Dshape.h"

class _3Dshape
{
public:
    _3Dshape(const char* _type, double _h, _2Dshape* _base):base{_base},height{_h},type{_type}{};
    virtual double volume() = 0;
    virtual double area() = 0;
    
protected:
    _2Dshape* base;
    double height;
    const char* type;
};

#endif
