#include <iostream>
#include "gtest/gtest.h"

//#include "prism.h"
//#include "square.h"


int main(int argc, char **argv)
{
/*
Square x{10};
x.disp();

Prism pr{7,&x};
std::cout<<pr<<std::endl;
*/
    ::testing::InitGoogleTest(&argc, argv);
    std::cout << "RUNNING TESTS ..." << std::endl;
    int ret{RUN_ALL_TESTS()};
    if (!ret)
        std::cout << "<<<SUCCESS>>>" << std::endl;
    else
        std::cout << "FAILED" << std::endl;
    return 0;

}

