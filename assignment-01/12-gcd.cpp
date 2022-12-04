/*
Author: chankruze (chankruze@gmail.com)
Created: Sun Dec 04 2022 23:14:55 GMT+0530 (India Standard Time)

Copyright (c) geekofia 2022 and beyond
*/

// Q: Write both recursive and non recursive function to find gcd of two integers.

#include <iostream>

using namespace std;

// non-recursive gcd
// int gcd(int x, int y) {
// }

// recursive gcd
// euclidean algo: GCD does not change if the smaller number gets subtracted from the larger
int gcd_r(int x, int y) {
  if (x == 0) return y;
  if (y == 0) return x;
  if (x == y) return x;
  if (x > y) return gcd_r(x - y, y);
  return gcd_r(x, y - x);
}

int main() {
  int a, b;
  cout << "Enter value for a: ";
  cin >> a;
  cout << "Enter value for b: ";
  cin >> b;
  cout << "GCD of " << a << " and " << b << " is " << gcd_r(a, b) << endl;
  return 0;
}