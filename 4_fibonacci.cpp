// Fibonacci - showing up daily

#include <iostream>

void fibonacci(int a, int b, int n) {
  std::cout << a + b << " ";

  if (n <= 1) {
    return;
  }

  fibonacci(b, a + b, --n);
}

int main() {
  int temp, a = 0, b = 1;
  int n = 10;

  std::cout << a << " ";
  std::cout << b << " ";

  fibonacci(a, b, n);

  std::cout << std::endl;

  return 0;
}

// Using Iteration
// int main() {
//   int temp, a = 0, b = 1;
//   int n = 10;

//   std::cout << a << ", ";
//   std::cout << b << ", ";

//   for (int i = 0; i < 10; i++) {
//     std::cout << a + b;

//     if (i != 9) {
//       std::cout << ", ";
//     }

//     temp = b;
//     b = a + b;
//     a = temp;
//   }

//   std::cout << std::endl;

//   return 0;
// }
