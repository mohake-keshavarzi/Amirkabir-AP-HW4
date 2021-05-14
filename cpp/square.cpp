#include "square.h"

Square:: Square(double s):_2Dshape{"square", 4} , side{s}
{

};

double Square::perimeter()  
{
    return side*pow(2,0.5);
}

double Square::area()
{
    return side*side;
}

void Square::disp()
{
    size_t size_t_side{static_cast<size_t>(side)};
    for(size_t i{} ; i<size_t_side ; i++)
    {
        for(size_t j{} ; j<size_t_side ; j++)
        {
            if(i==0 || i==size_t_side-1)
                std::cout<<"* ";
            else if(j==0 || j==size_t_side-1)
                std::cout<<"* ";
            else
                std::cout<<"  ";
        }
        std::cout<<std::endl;
        
        
    }
}