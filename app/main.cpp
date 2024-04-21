#include "myLib.h"
#include <nlohmann/json.hpp>
#include <iostream>

int main()
{
    print_test();
    std::cout << NLOHMANN_JSON_VERSION_MAJOR << std::endl;
    std::cout << factorial(4) << std::endl;
    return 0;
}
