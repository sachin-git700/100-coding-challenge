#include <iostream>

void printArr(int* arr, int length) {
  for (int i = 0; i < length; i++) {
    std::cout << arr[i];

    if (i != length - 1) {
      std::cout << ", ";
    }
  }

  std::cout << std::endl;
}

void swap(int* arr, int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

// ascending order sorting
void bubbleSort(int* arr, int length) {
  for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < length; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr, j, j + 1);
      }
    }
  }

  printArr(arr, length);
}

int main() {
  int arr[] = {2, 4, 10, 3, 5, 1};

  bubbleSort(arr, 6);
  return 0;
}
