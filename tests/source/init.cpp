#include <Laboratory-work-6-sem2.hpp>
#include <catch.hpp>

SCENARIO("real")
{
    complex r(4,5);
    double rv = r.real();
    
    REQUIRE( rv == 4);
}
SCENARIO("imaginary")
{
    complex r(4,5);
    double rv = r.real();
    
    REQUIRE( rv == 5);
}
SCENARIO("add")
{
    complex r(4,5);
    double rv = r.real();
    
    REQUIRE( rv == 5);
}


