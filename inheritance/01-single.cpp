/*
Author: chankruze (chankruze@gmail.com)
Created: Mon Dec 05 2022 07:41:16 GMT+0530 (India Standard Time)

Copyright (c) geekofia 2022 and beyond
*/

#include <iostream>

using namespace std;

class A {
 private:
  int a = 10;
  int b = 20;

 public:
  void show(void);
};

void A::show() {
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
}

/**
 * class B inherited from (private) A
 */

// class B : A {
// };

class B : public A {
};

int main() {
  B objB;
  objB.show();  // function "A::show" (declared at line 17) is inaccessible if class B is inherited using private or protected access of base.

  return 0;
}