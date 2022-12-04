/*
Author: chankruze (chankruze@gmail.com)
Created: Fri Dec 02 2022 21:05:35 GMT+0530 (India Standard Time)

Copyright (c) geekofia 2022 and beyond
*/

// Q: Write a program to reverse a number using function recursion

#include <iostream>

using namespace std;

int reverse(int num, int rev) {
  if (num > 0) {
    rev = (rev * 10) + (num % 10);
    num /= 10;
    return reverse(num, rev);
  }

  return rev;
}

int main() {
  int num, rev;
  cout << "Enter a number: ";
  cin >> num;
  cout << "Reversed number is: " << reverse(num, rev) << endl;

  return 0;
}