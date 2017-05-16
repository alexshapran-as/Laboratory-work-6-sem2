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
    double rv = r.imaginary();
    
    REQUIRE( rv == 5);
}
SCENARIO("add")
{
    complex r(4,5);
    double rv = r.add(r);
    
    REQUIRE( rv == 4.2);
}
SCENARIO("sub")
{
    complex r(4,5);
    double rv = r.sub(r);
    
    REQUIRE( rv == 2.8);
}
SCENARIO("mult")
{
    complex r(4,5);
    double rv = r.mult(r);
    
    REQUIRE( rv == 8);
}
SCENARIO("div")
{
    complex r(4,5);
    bool rv = r.div(r);
    
    REQUIRE( rv == true);
}




