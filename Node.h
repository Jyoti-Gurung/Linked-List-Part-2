#ifndef NODE_H
#define NODE_H

#include "Student.h"

using namespace std;

class Node {
public:
  Node();
  ~Node(); //Destructor
  //Setters
  void setStudent(Student* newStudent);
  void setNext(Node* newNext);
  //Getters
  Student* getStudent();
  Node* getNext();
  //variables
  void setId(int newId);
  int getId();
  void setGpa(float newGpa);
  float getGpa();
private:
  //Variables
  Student* student;
  Node* next;
  int id;
  float gpa;
};
#endif