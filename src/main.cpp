#include <iostream>
#include "utils.h"

int main() {
  std::cout << "Hello from main.cpp!" << std::endl;
  utilsFunction();

  int num1 = 10;
  int num2 = 5;

  int sum = add(num1, num2);
  std::cout << "Sum: " << sum << std::endl;

  int difference = subtract(num1, num2);
  std::cout << "Difference: " << difference << std::endl;

  return 0;
}