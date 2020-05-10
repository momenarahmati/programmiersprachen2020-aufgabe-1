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

TEST_CASE("describe_gcd_1", "[gcd]")
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
TEST_CASE("describe_cheksum_2", "[cheksum]")
{
    REQUIRE(cheksum(123456)==21);
    REQUIRE(cheksum(0)==0);
    REQUIRE(cheksum(6000)==6);
}

int sum_multiples(int n)
{
    int ergebnis = 0;
    if (n % 3 || n % 5)
    {
        for (int i = 0; i < n; i++)
        {
            ergebnis = ergebnis + i;
        }
        std::cout << "die Summe alle Zahlen von 1 bis 1000, die durch 3 oder 5 teilbar sind : " << ergebnis << "\n";
        return ergebnis;
    }
}
TEST_CASE("describe_summultiples_3", "[sum_multiples]")
{
    REQUIRE(sum_multiples(1000)==499500);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
