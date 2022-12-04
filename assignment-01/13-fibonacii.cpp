/*
Author: chankruze (chankruze@gmail.com)
Created: Sun Dec 04 2022 23:28:37 GMT+0530 (India Standard Time)

Copyright (c) geekofia 2022 and beyond
*/

// Q: Write a program to print fibonacii sequence up to 50 terms. (Assume, first two terms of fibonacii sequence are 0 and 1 respectively.)

// #include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <map>

using namespace std;
// using namespace boost::multiprecision;

int fibonacii(int n) {
  static map<int, int> fibonacii_results;

  if (n <= 1) return n;

  // check if the value exists in the memoized map
  if (fibonacii_results.count(n) > 0) {
    return fibonacii_results[n];
  }

  // save the result to map
  fibonacii_results[n] = fibonacii(n - 1) + fibonacii(n - 2);
  // return the value
  return fibonacii_results[n];
}

int main() {
  int terms;
  cout << "Enter the number of terms: ";
  cin >> terms;

  for (int i = 0; i < terms; i++) {
    cout << fibonacii(i) << " ";
  }

  cout << endl;

  return 0;
}
