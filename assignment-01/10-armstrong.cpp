/*
Author: chankruze (chankruze@gmail.com)
Created: Sun Dec 04 2022 23:03:49 GMT+0530 (India Standard Time)

Copyright (c) geekofia 2022 and beyond
*/

// Q: Write a program to check whether a number is Armstrong or not?

#include <iostream>

using namespace std;

bool is_armstrong(int num) {
  int digit, temp = num, sum = 0;
  // add the 3rd power of each digit and check if it's same as the number
  while (temp) {
    digit = temp % 10;
    sum += digit * digit * digit;
    temp /= 10;
  }

  return sum == num;
}

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  if (is_armstrong(num)) {
    cout << "Bingo, " << num << " is Armstrong!" << endl;
    return 0;
  }

  cout << "Ahh, " << num << " is NOT Armstrong!" << endl;
  return 0;
}