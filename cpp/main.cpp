#include <iostream>
#include "gtest/gtest.h"

#include "rectangle.h"

int main(int argc, char **argv)
{
Rectangle x{5,3};
x.disp();
Rectangle y{5.2,8};
y.disp();

/*
    ::testing::InitGoogleTest(&argc, argv);
    std::cout << "RUNNING TESTS ..." << std::endl;
    int ret{RUN_ALL_TESTS()};
    if (!ret)
        std::cout << "<<<SUCCESS>>>" << std::endl;
    else
        std::cout << "FAILED" << std::endl;
    return 0;
*/
}

