#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include<cmath>

int gcd(int a, int b)
{
    int h;
    if (a == 0)
    {
        return abs(b); // absolute value of b
    }
    if (b == 0)
    {
        return abs(a);
    }
    do
    {
        h = a % b;
        a = b;
        b = h;
    } while (b != 0);
    return abs(a);
}

TEST_CASE("describe_gcd", "[gcd]")
{
    REQUIRE(gcd(2,4)==2);
    REQUIRE(gcd(1,0)==1);
    REQUIRE(gcd(9,6)==3);
    REQUIRE(gcd(3,7)==1);
    REQUIRE(gcd(3,-7)==1);
}

int cheksum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum = sum +(n%10);
        n = n / 10;
    }
    return sum;
    std::cout << "Die Quersumme von " << n << "ist" << sum << "\n";
}
TEST_CASE("describe_cheksum", "[cheksum]")
{
    REQUIRE(cheksum(123456)==21);
    REQUIRE(cheksum(0)==0);
    REQUIRE(cheksum(6000)==6);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
