/*
Author: chankruze (chankruze@gmail.com)
Created: Wed Jan 11 2023 13:22:15 GMT+0530 (India Standard Time)

Copyright (c) geekofia 2023 and beyond
*/

using namespace std;

#include <ctime>
#include <iostream>
#include <string>

class Message {
 private:
  string sender_;
  string recepient_;
  string message_;
  char *date_;

 public:
  Message(string, string);
  void append(string);
  void print() const;
  string toString() const;
  string getSender() const;
  string getRecepient() const;
  char *getDate() const;
};
