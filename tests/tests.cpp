#include <iostream>
#include <cstdio>
#include "../include/math.h"

int main()
{
  std::cout << "MATH LIBRARY TEST MODULE!";
  static int option = 0;
  do
  {
    std::cout << std::endl << "Choose the function to test: " << std::endl;
    std::cout << "1. m_abs(x): absolute value of a number" << std::endl;
    std::cout << "2. m_sqr(x): square of a number" << std::endl;
    std::cout << "3. m_sqrt(x): square root of a number " << std::endl;
    std::cout << "> ";
    std::cin >> option;

    if (option == 1)
    {
      double number = 0.0;
      std::cout << "Introduce a number: ";
      std::cin >> number;
      number = m_abs(number);
      std::cout << "Normal: " << number << std::endl;
      std::cout << "Fixed: " << std::fixed << number << std::endl;
      std::cout << "Scientific: " << std::scientific << number << std::endl;
    }
    else if (option == 2)
    {
      double number = 0.0;
      std::cout << "Introduce a number: ";
      std::cin >> number;
      number = m_sqr(number);
      std::cout << "Normal: " << number << std::endl;
      std::cout << "Fixed: " << std::fixed << number << std::endl;
      std::cout << "Scientific: " << std::scientific << number << std::endl;
    }
        else if (option == 3)
    {
      double number = 0.0;
      std::cout << "Introduce a number: ";
      std::cin >> number;
      number = m_sqrt(number);
      std::cout << "Normal: " << number << std::endl;
      std::cout << "Fixed: " << std::fixed << number << std::endl;
      std::cout << "Scientific: " << std::scientific << number << std::endl;
    }  
    
  } while (option != 0);
  std::cout << "TERMINATING PROGRAM!" << std::endl;
  
  return 0;
}
