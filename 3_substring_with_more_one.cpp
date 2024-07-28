// Q. Substring with more 1 then 0.

// brute force has been used. It will cause TLE but it's brute force is a good starting point for now.
// DP can be (will be) used in future once more comfortable with DP.

#include <iostream>

int isDominating(std::string str, int startingIndex, int endingIndex) {
  int zeroCount = 0;
  int oneCount = 0;

  for (int i = startingIndex; i <= endingIndex; i++) {
    if (str[i] == '0') {
      zeroCount++;
    } else {
      oneCount++;
    }
  }

  int result = oneCount >= zeroCount ? 1 : -1;

  return result;
};

int calculateDominatingSubStringCount(std::string str) {
  int strLength = 0;

  for (int i = 0; str[i] != '\0'; i++) {
    strLength++;
  }

  int count = 0;
  std::cout << str << std::endl;

  for (int i = 0; i < strLength; i++) {
    int size = i + 1;

    for (int j = 0; j < strLength - size + 1; j++) {
      if (isDominating(str, j, j + size - 1) == 1) {
        count++;
      }
    }
  }

  return count;
};

int main() {
  std::string str = "00011";

  int count = calculateDominatingSubStringCount(str);
  std::cout << count << std::endl;

  return 0;
}
