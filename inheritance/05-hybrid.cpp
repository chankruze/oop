/*
Author: chankruze (chankruze@gmail.com)
Created: Mon Dec 05 2022 08:12:14 GMT+0530 (India Standard Time)

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
 * derived cum base class B
 */

class B : public A {
 private:
  int b = 20;

 public:
  void showB(void);
};

/**
 * base class C
 */

class C {
 private:
  int c = 30;

 public:
  void showC(void);
};

/**
 * derived class D
 */

class D : public B, public C {
 private:
  int d = 40;

 public:
  void showD(void);
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

void D::showD() {
  cout << "d = " << d << endl;
}

int main() {
  D objD;

  objD.showA();
  objD.showB();
  objD.showC();
  objD.showD();

  return 0;
}