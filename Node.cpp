//Author: Nathan Zou
//Date: 1/13/22
//For use by the person who is using this code for Linked Lists part 2

#include <iostream>
#include <cstring>

#include "Node.h"
#include "Student.h"

using namespace std;

//Constructor
Node::Node() {
  next = NULL;
}

Node::~Node() {
  delete &student;
  next = NULL;
}

//Setters
void Node::setStudent(Student* newStudent) {
  student = newStudent;
}

void Node::setNext(Node* newNext) {
  next = newNext;
}

//Getters
Student* Node::getStudent() {
  return student;
}

Node* Node::getNext() {
    return next;
}

//Variables
void Node::setId(int newId) {
  id = newId;
}

int Node::getId() {
  return id;
}

void Node::setGpa(float newGpa) {
  gpa = newGpa;
}

float Node::getGpa() {
  return gpa;
}

void Node::setFirstName(char input[]) {
  for (int i = 0; i < strlen(input); i++) {
    firstName[i] = input[i];
  }
}

char* Node::getFirstName() {
  char* str = firstName;
  for (int i = 0; i < strlen(firstName); i++) {
    str[i] = firstName[i];
  }
  return str;
}

void Node::setLastName(char input[]) {
  for (int i = 0; i < strlen(input); i++) {
    lastName[i] = input[i];
  }
}

char* Node::getLastName() {
  char* str = lastName;
  for (int i = 0; i < strlen(lastName); i++) {
    str[i] = lastName[i];
  }
  return str;
}