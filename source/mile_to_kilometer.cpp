#include <iostream> 
#include <string>

int main() 
    {
        double m = 0.0f;
        std::cout << "Bitte geben Sie Milen : \n";
        std::cin >> m;
        float kilometer = 1.61;
        double k;
        k = kilometer * m;
        std::cout << m << " mile ist " << k << " kilometer \n ";
        return 0;
    }
