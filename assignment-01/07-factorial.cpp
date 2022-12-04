/*
Author: chankruze (chankruze@gmail.com)
Created: Sun Dec 04 2022 22:33:06 GMT+0530 (India Standard Time)

Copyright (c) geekofia 2022 and beyond
*/

// Q: Write a program to find factorial of a number.

#include <iostream>

using namespace std;

int factorial(int num) {
  if (num < 1) {
    return 1;
  }

  return num * factorial(num - 1);
}

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  cout << num << "! = " << factorial(num) << endl;
  return 0;
}