// Fibonacci - showing up daily

#include <iostream>

int main() {
  int temp, a = 0, b = 1;
  int n = 10;

  std::cout << a << ", ";
  std::cout << b << ", ";

  for (int i = 0; i < 10; i++) {
    std::cout << a + b;

    if (i != 9) {
      std::cout << ", ";
    }

    temp = b;
    b = a + b;
    a = temp;
  }

  std::cout << std::endl;

  return 0;
}
