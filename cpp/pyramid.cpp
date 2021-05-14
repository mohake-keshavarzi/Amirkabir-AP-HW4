#include "pyramid.h"
#include "rectangle.h"
#include "square.h"
#include "triangle.h"

Pyramid::Pyramid(double _h, _2Dshape* _base, size_t _pharaoh):_3Dshape{_base->getName(),_h,_base}
{   
    if (_pharaoh==1)
        pharaoh=new char{*"Tutankhamun"};
    else if (_pharaoh==2)
        pharaoh=new char{*"Ramesses"};
    else if (_pharaoh==3)
        pharaoh=new char{*"Cleopatra"};
    else
        pharaoh=new char{*"unknown"};
}

double Pyramid::volume()
{
    return base->area() * height/3;
}

double Pyramid::area()
{
    
    if (*type==*"square")
    {
        Square* sq{dynamic_cast<Square *>(base)};
        return sqrt(pow(sq->side/2,2)+height*height)*sq->side * 2 + sq->area();
    }
    else if(*type==*"rectangle")
    {
        Rectangle* rect{dynamic_cast<Rectangle *>(base)};
        return sqrt(pow(rect->length/2,2)+height*height)*rect->width + sqrt(pow(rect->width/2,2)+height*height)*rect->length + rect->area();
    }
    else if(*type==*"triangle")
    {
        Triangle* tr{dynamic_cast<Triangle *>(base)};
        double r {pow(tr->side,2)/2/sqrt(pow(tr->side,2)-pow(tr->base/2,2))};
        return sqrt(r*r-pow(tr->base/2,2)) * (tr->base/2) + sqrt(r*r-pow(tr->side/2,2)) * tr->side + tr->area();
    }
    else
        return -1;
        
}

Pyramid::~Pyramid()
{
    
    delete pharaoh;

}

Pyramid::Pyramid(const Pyramid& pr):_3Dshape{pr.base->getName(),pr.height,pr.base}
{
    delete pharaoh;
    pharaoh=new char{*pr.pharaoh};
}

Pyramid& Pyramid::operator=(const Pyramid& pr)
{
    if(this==&pr) return *this;
    height=pr.height;
    delete pharaoh;
    pharaoh=new char{*pr.pharaoh};
    type=pr.type;
    base=pr.base;
    return *this;
}

Pyramid& Pyramid::operator=(Pyramid&& pr)
{
    
    height=pr.height;
    type=pr.type;
    base=pr.base;
    pharaoh=pr.pharaoh;
    pr.pharaoh=nullptr;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Pyramid& p)
{
    std::cout<<"Pharaoh "<<p.pharaoh<<" is buried in this pyramid!";
    return os;
}