#include <catch2/catch_test_macros.hpp>
#include "myLib.h"

TEST_CASE("Factorials are computed", "[factorial]")
{
    REQUIRE(factorial(4) == 24);
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(0) == 1);
    REQUIRE(factorial(3) == 6);
}