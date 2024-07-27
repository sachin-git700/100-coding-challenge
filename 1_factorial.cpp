// To brush up recursion knowledge & get some hand on practice
#include <iostream>

int factorial(int n) {
  if (n < 0) {
    return -1;
  }

  if (n == 0 || n == 1) {
    return 1;
  }

  return n * factorial(n - 1);
};

int main() {
  int n;
  std::cout << "Enter a number: ";
  std::cin >> n;

  int result = factorial(n);

  if (result == -1) {
    std::cout << "Factorial of a negative number is not possible" << std::endl;
    return 0;
  }

  std::cout << result << std::endl;

  return 0;
}
