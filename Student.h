#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

class Student {
  public:
    Student* getStudent();
    void setStudent(Student* newStudent);
  private:
    Student* student;
};

#endif