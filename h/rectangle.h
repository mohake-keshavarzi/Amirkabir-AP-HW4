#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include <iostream>
#include "2Dshape.h"

 class  Rectangle final : public _2Dshape 
{
public:
    friend class Pyramid; 
    Rectangle(double l, double w);
    void disp() override;
    double perimeter() override;
    double area() override;
    
private:
    double length;
    double width;
};

#endif
