/*
Author: chankruze (chankruze@gmail.com)
Created: Mon Dec 05 2022 18:21:59 GMT+0530 (India Standard Time)

Copyright (c) geekofia 2022 and beyond
*/

// Q: Write a program to print all integers from 1 to n using recursion, where the value of n is supplied by the user

#include <iostream>

using namespace std;

void print(int n) {
  static int i = 1;

  cout << i << " ";
  i++;

  if (i > n) {
    cout << endl;
    return;
  }

  print(n);
}

int main() {
  int n;
  cout << "Enter a number n: ";
  cin >> n;
  print(n);

  return 0;
}