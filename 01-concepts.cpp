/*
Author: chankruze (chankruze@gmail.com)
Created: Fri Nov 18 2022 20:01:29 GMT+0530 (India Standard Time)

Copyright (c) geekofia 2022 and beyond
*/

#include <iostream>
#include <string>

using namespace std;

// student class
class Student {
 private:
  string name_;
  int age_;

 public:
  // Parameterized constructor: the constructor which takes some argument
  Student(string name, int age) {
    this->name_ = name;
    this->age_ = age;
  }

  /// @brief member function to get the age of the student
  /// @return int
  int age() {
    return this->age_;
  }

  /// @brief member function to set the age of the student
  /// @param age: int
  /// @return void
  void setAge(int age) {
    this->age_ = age;
  }

  /// @brief member function to get the name of the student
  /// @return string
  string name() {
    return this->name_;
  }

  /// @brief member function to set the name of the student
  /// @param name: string
  /// @return void
  void setName(string name) {
    this->name_ = name;
  }

  // scope resolution operator (::) needs this declaration to work
  void print(void);
};

// A member function can be defined outside side the class definition
// using scope resolution operator (::) as below:

/// @brief member function to print the student details
/// @return void
void Student::print() {
  cout << "------ Student ------" << endl;
  cout << "Name: " << this->name_ << endl;
  cout << "Age: " << this->age_ << endl;
  cout << "---------------------" << endl;
}

int main() {
  // call Student's parameterized constructor to create a student object
  Student student("Chandan Kumar Mandal", 21);
  // print the student details
  student.print();
  // update the student details using public setters of Student
  string name;
  int age;
  // user input
  cout << "Enter new name: ";
  // cin doesn't "fail"; it just stops reading when a space is found.
  // It sees a lexical token as a "string".
  getline(cin, name); // use std::getline from <string> for input with spaces
  cout << "Enter new age: ";
  cin >> age;
  // call setName member function with new name
  student.setName(name);
  // call setAge member function with new age
  student.setAge(age);
  // print the details
  student.print();
  return 0;
}
