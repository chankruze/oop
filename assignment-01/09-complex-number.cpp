/*
Author: chankruze (chankruze@gmail.com)
Created: Sun Dec 04 2022 22:53:16 GMT+0530 (India Standard Time)

Copyright (c) geekofia 2022 and beyond
*/

// Q: Using structure, write a program to find addition of two complex number.

#include <iostream>

using namespace std;

struct ComplexNumber {
  double real;
  double imag;
};

void print(ComplexNumber c) {
  cout << c.real << " + " << c.imag << "i" << endl;
}

ComplexNumber add(ComplexNumber c1, ComplexNumber c2) {
  // sum of the two complex number
  ComplexNumber sum;
  // add the real part
  sum.real = c1.real + c2.real;
  // add the imaginary part
  sum.imag = c1.imag + c2.imag;
  // return the sum
  return sum;
}

int main() {
  ComplexNumber c1, c2, sum;

  c1 = {10.0, 20.1};
  c2 = {-5.9, 0.1};

  print(c1);
  print(c2);

  sum = add(c1, c2);

  print(sum);

  return 0;
}