#include "triangle.h"


Triangle::Triangle(double b, double s):
    _2Dshape{"triangle", 3} , side{s}, base{b}
{
    std::cout<<"triangle height is:"<<sqrt(side*side-(base*base)/4)<<std::endl;
}

double Triangle::perimeter()  
{
    return 2*side+base;
}

double Triangle::area()
{
    return sqrt(side*side-(base*base)/4)*base/2;
}

void Triangle::disp()
{
    size_t size_t_b{static_cast<size_t>(base)};
   // size_t size_t_s{static_cast<size_t>(side)};
    double height{sqrt(side*side-(base*base)/4)};
    double cosin_factor{base/2/height};
    size_t size_t_h{static_cast<size_t>(height)};
    size_t lastj1{};
    size_t lastj2{};
    for(size_t i{} ; i<size_t_h ; i++)
    {
        for(size_t j{} ; j<size_t_b ; j++)
        {
                
            if(i==size_t_h-1)
                std::cout<<" *";
            else if(j==floor(base/2-(cosin_factor*i)) && lastj1!=j)
            { 
                std::cout<<"* ";
                lastj1=floor(base/2-(cosin_factor*i)); 
            }
            else if(j==ceil(base/2+(cosin_factor*i)) && lastj2!=j)
            {
                std::cout<<"* ";
                lastj2=ceil(base/2+(cosin_factor*i));
            }
            else
                std::cout<<"  ";
        }
        std::cout<<std::endl;
        
        
    }
}