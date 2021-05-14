#include <iostream>
#include "gtest/gtest.h"

#include "square.h"
int main(int argc, char **argv)
{
Square x{5};
x.disp();
Square y{6};
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

