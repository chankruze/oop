/*
Author: chankruze (chankruze@gmail.com)
Created: Sun Dec 04 2022 22:39:33 GMT+0530 (India Standard Time)

Copyright (c) geekofia 2022 and beyond
*/

// Q: Write a program to find largest among a list of integers stored in an array.

#include <iostream>

using namespace std;

int max(int *arr, int arr_size) {
  int max = arr[0];

  for (int i = 0; i < arr_size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  return max;
}

int main() {
  //   int array[] = {1, -89, 89, 23, 123, -1, 0};
  //   int size = sizeof(array) / sizeof(array[0]);
  // default size
  int size = 4;
  cout << "Enter the array size (i.e. 4): ";
  cin >> size;
  // declare array of size x
  int array[size];

  // input array elements
  for (int i = 0; i < size; i++) {
    cout << "Enter the " << i + 1 << "th element: ";
    cin >> array[i];
  }

  // print the array
  cout << "Given array = {";
  for (int i = 0; i < size; i++) {
    cout << array[i];

    if (i + 1 < size) {
      cout << ", ";
    }
  }
  cout << "}" << endl;

  cout << "Max element is " << max(array, size) << endl;

  return 0;
}
