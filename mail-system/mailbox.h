/*
Author: chankruze (chankruze@gmail.com)
Created: Wed Jan 11 2023 13:25:42 GMT+0530 (India Standard Time)

Copyright (c) geekofia 2023 and beyond
*/

using namespace std;

#include <ctime>
#include <iostream>
#include <string>
#include <vector>

#include "./message.h"

class MailBox {
 private:
  int uuid_;
  string label_;
  vector<Message> messages_;
  char *updatedAt_;

 public:
  static int ID;
  static int genID();

 public:
  MailBox();
  MailBox(string);
  int count() const;
  void addMessage(Message);
  Message getMessage(int) const;
  void delMessage(int);
  void listMails() const;
};