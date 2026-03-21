#include <iostream>
#include <cstdio>
#include "../include/math.h"

int main()
{
  std::cout << "Choose the function to test: " << std::endl;
  std::cout << "m_abs(): " << std::endl << "> ";
  
  int option = 0;
  std::cin >> option;
  if (option == 1)
  {
    double number = 0.0;
    std::cout << "Introduce a number: ";
    std::cin >> number;
    number = m_abs(number);
    std::cout << "Fixed: " << std::fixed << number << std::endl;
    std::cout << "Scientific: " << std::scientific << number << std::endl;
  }
  
  return 0;
}
