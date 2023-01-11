/*
Author: chankruze (chankruze@gmail.com)
Created: Wed Jan 11 2023 11:41:13 GMT+0530 (India Standard Time)

Copyright (c) geekofia 2023 and beyond
*/

#include "./mailbox.h"

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

int MailBox::ID = 0;

int MailBox::genID() {
  MailBox::ID += 1;
  return MailBox::ID;
}

// constructor
MailBox::MailBox() {
  // update the uuid of the mailbox
  this->uuid_ = genID();

  // add the mailbox level
  this->label_ = "Inbox " + to_string(uuid_);

  // update the time to current time
  time_t now = time(0);
  char *dt = ctime(&now);
  this->updatedAt_ = dt;
}

// constructor
MailBox::MailBox(string label) {
  // update the uuid of the mailbox
  this->uuid_ = genID();

  // add the mailbox level
  if (label != "") {
    this->label_ = label;
  } else {
    this->label_ = "Inbox " + to_string(uuid_);
  }

  // update the time to current time
  time_t now = time(0);
  char *dt = ctime(&now);
  this->updatedAt_ = dt;
}

// count the number of messages
int MailBox::count() const {
  return this->messages_.size();
}

// add message to mailbox
void MailBox::addMessage(Message m) {
  this->messages_.push_back(m);
  // update the time to current time
  time_t now = time(0);
  char *dt = ctime(&now);
  this->updatedAt_ = dt;

  // TODO: notify the user that a new message has been added to the mailbox
}

// show the mailbox
void MailBox::listMails() const {
  cout << "--------------------------------------------------------------------------------" << endl;
  cout << "Label: " << this->label_ << endl;
  cout << "ID: " << this->uuid_ << endl
       << endl;
  cout << "Total (" << count() << ") messages"
       << "\t\t\tLast updated: " << this->updatedAt_;
  cout << "--------------------------------------------------------------------------------" << endl;

  // C++17
  //   for (Message message : this->messages_) {
  //     cout << "#" <<  << "\t" <<  message.getSender() << "\t" << message.getRecepient() << "\t" << message.getDate();
  //   }

  cout << "#\tFrom\t\t\tTo\t\t\tDate" << endl;
  cout << "--------------------------------------------------------------------------------" << endl;
  for (int i = 0; i < this->messages_.size(); i++) {
    Message message = this->messages_[i];
    cout << i << "\t" << message.getSender() << "\t" << message.getRecepient() << "\t" << message.getDate();
  }
  cout << "--------------------------------------------------------------------------------" << endl;
}

// count the number of messages
Message MailBox::getMessage(int i) const {
  return this->messages_.at(i);
}

int main() {
  MailBox home("Home");
  MailBox work("Work");
  MailBox inbox;

  Message m1("chankruze@gmail.com", "chankruze@gmail.com");
  Message m2("noreply@teamviewer.com", "chankruze@gmail.com");
  Message m3("noreply@instagram.com", "chankruze@gmail.com");
  Message m4("hiring@wipro.com", "chankruze@gmail.com");

  m1.append("Message 1");
  m2.append("Message 2");
  m3.append("Message 3");
  m4.append("Message 4");

  inbox.addMessage(m1);
  inbox.addMessage(m3);
  inbox.addMessage(m4);
  inbox.addMessage(m2);

  inbox.listMails();

  //   Message temp = inbox3.getMessage(3);
  //   cout << "Message at index " << 3 << " is: " << endl
  //        << endl;
  //   temp.print();
}