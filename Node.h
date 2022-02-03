#ifndef NODE_H
#define NODE_H

#include "Student.h"

using namespace std;

class Node {
public:
  Node(Student*);
  ~Node(); //Destructor
  //Setters
  void setStudent(Student* newStudent);
  void setNext(Node*);
  //Getters
  Student* getStudent();
  Node* getNext();
private:
  //Variables
  Student* student;
  Node* next;
};
#endif