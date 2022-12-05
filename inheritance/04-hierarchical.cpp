/*
Author: chankruze (chankruze@gmail.com)
Created: Mon Dec 05 2022 08:10:15 GMT+0530 (India Standard Time)

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
 * derived class B
 */

class B : public A {
 private:
  int b = 20;

 public:
  void showB(void);
};

/**
 * derived class C
 */

class C : public A {
 private:
  int c = 30;

 public:
  void showC(void);
};

void A::showA() {
  cout << "a = " << a << endl;
}

void B::showB() {
  cout << "b = " << b << endl;
}

void C::showC() {
  cout << "c = " << c << endl;
}

int main() {
  B objB;
  C objC;

  objB.showA();
  objB.showB();

  objC.showA();
  objC.showC();

  return 0;
}