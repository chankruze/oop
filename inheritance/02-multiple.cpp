/*
Author: chankruze (chankruze@gmail.com)
Created: Mon Dec 05 2022 08:00:44 GMT+0530 (India Standard Time)

Copyright (c) geekofia 2022 and beyond
*/

#include <iostream>

using namespace std;

/**
 * base class A
 */
class A {
 private:
  int a = 10;

 public:
  void showA(void);
};

/**
 * base class B
 */
class B {
 private:
  int b = 20;

 public:
  void showB(void);
};

/**
 * derived class C
 */
class C : public A, public B {
};

void A::showA() {
  cout << "a = " << a << endl;
}

void B::showB() {
  cout << "b = " << b << endl;
}

int main() {
  C objC;

  objC.showA();
  objC.showB();

  return 0;
}