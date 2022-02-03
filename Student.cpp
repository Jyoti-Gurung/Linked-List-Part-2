#include <iostream>
#include <cstring>

#include "Student.h"

using namespace std;

void Student::setStudent(Student* newStudent) {
  student = newStudent;
}

Student* Student::getStudent() {
  return student;
}
