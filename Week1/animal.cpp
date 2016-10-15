/***
** Author: Nick Roy
** Date: 3/26/16
** Description: Week one program. Asks user for their favorite animal and
** displays it
***/

#include <iostream>
#include <string>

int main() 
{
  std::string faveAnimal;
  std::cout << "Please enter your favorite animal." << std::endl;
  std::cin >> faveAnimal;
  std::cout << "Your favorite animal is the " << faveAnimal;
  std::cout << "." << std::endl;

  return 0;
}
