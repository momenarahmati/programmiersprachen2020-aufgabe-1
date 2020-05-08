#include<iostream>

int findKvg()
{
   
    int zahl = 20;
    while(true)
    {
        bool is_divisible_by_number = true;
        for (int i=1; i<20; ++i)
        {
            if (0!=(zahl%i))
            {
                is_divisible_by_number = false;
            }
        }
        if (is_divisible_by_number)
        {
            std::cout<< "The smalles number that is divisible by number 1 to 20 is :" << zahl <<std::endl;
            break;
            return zahl;
        }
        zahl +=20;
    }
}


int main()
{
  std::cout << "Hello, World!\n";
 
  findKvg();
  
}
