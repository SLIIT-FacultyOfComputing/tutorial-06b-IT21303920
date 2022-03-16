#include "Student.h"
#include <iostream>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int sid , char pname) {
  studentId = sid;
  strcpy(name , pname);
  
}

// Display StudentId and Name
void Student::display() {
  cout<< studentId<< endl;
  cout << name<<endl;
}
