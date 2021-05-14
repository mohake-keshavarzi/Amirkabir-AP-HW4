#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#include <iostream>
#include "2Dshape.h"

class Triangle : public _2Dshape
{
public:
    friend class Pyramid;
    Triangle(double b, double s);
    void disp() override;
    double perimeter() override;
    double area() override;
    
private:
    double side;
    double base;
};

#endif
