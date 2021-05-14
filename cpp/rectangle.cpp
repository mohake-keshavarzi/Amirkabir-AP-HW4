#include "rectangle.h"


Rectangle::Rectangle(double l, double w):
    _2Dshape{"rectangle", 4} , length{l}, width{w}
{

}

double Rectangle::perimeter()  
{
    return 2*(length+width);
}

double Rectangle::area()
{
    return length*width;
}

void Rectangle::disp()
{
    size_t size_t_l{static_cast<size_t>(length)};
    size_t size_t_w{static_cast<size_t>(width)};
    
    for(size_t i{} ; i<size_t_w ; i++)
    {
        for(size_t j{} ; j<size_t_l ; j++)
        {
            if(i==0 || i==size_t_w-1)
                std::cout<<"* ";
            else if(j==0 || j==size_t_l-1)
                std::cout<<"* ";
            else
                std::cout<<"  ";
        }
        std::cout<<std::endl;
        
        
    }
}