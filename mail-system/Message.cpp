/*
Author: chankruze (chankruze@gmail.com)
Created: Wed Jan 11 2023 11:19:54 GMT+0530 (India Standard Time)

Copyright (c) geekofia 2023 and beyond
*/

#include "./message.h"

Message::Message(string from, string to) {
  this->sender_ = from;
  this->recepient_ = to;

  // get curent timestamp
  time_t now = time(0);
  char *dt = ctime(&now);

  // assign the current time to the date_
  this->date_ = dt;
}

void Message::append(string s) {
  this->message_ += s + " ";
}

// print full message
void Message::print() const {
  cout << "From: " << this->sender_ << endl;
  cout << "To: " << this->recepient_ << endl;
  cout << "Date: " << this->date_ << endl;
  cout << this->message_ << endl;
}

string Message::toString() const {
  return "From: " + this->sender_ + "\nTo: " + this->recepient_ + "\nDate: " + this->date_ + "\n\n" + this->message_ + "\n";
}

string Message::getSender() const {
  return this->sender_;
}

string Message::getRecepient() const {
  return this->recepient_;
}

char *Message::getDate() const {
  return this->date_;
}

// driver code
int main() {
  Message m1("chankruze@gmail.com", "example@domain.com");
  m1.append("Hi, how are you?");
  m1.append("It has been a long time since we were met. Can we meet tomorrow?");
  m1.append("\nWaiting for your reply.");
  // print the message
  m1.print();
  return 0;
}