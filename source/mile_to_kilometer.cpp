#include <iostream> 
#include <string>
# define CATCH_CONFIG_RUNNER
# include "catch.hpp"

double mileToKilometer(double m)
{
    double km = m * 1.609;
    return km;
}

TEST_CASE("mileToKilometer_9","[mileToKilometer]")
{
    REQUIRE(mileToKilometer(1) == Approx(1.609));
    REQUIRE(mileToKilometer(0) == Approx(0.0));
    REQUIRE(mileToKilometer(5) == Approx(8.045));
}

    int main(int argc, char* argv[])
    {
        return Catch::Session().run(argc, argv);
    
    std::cout << "Bitte geben Sie eine Zahl fuer die Umrechnung von Meilen zu Kilometer ein:\n";
    double m = 0;
    std::cin>>m;
    std::cout<<m<< " Meilen sind umgerechnet " << mileToKilometer(m) << " Kilometer.\n";

    return 0;
}