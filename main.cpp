/*
Name: Jyoti Gurung
Date: 1/26/22
Project: Using Linked lists and no vectors, make a student list (info: name, GPA, ID). Add to the list, print it, delete, get the average GPA and quit the program.
*/

#include <iostream>

#include "Node.h"

using namespace std;

//set up the functions, up here so I can use it in main, since they are written below main
void add();
void print(Node* next);
void remove();
void average( Node* next);

//starter node for everything
Node* head = NULL;

//used to add up GPA of all students, and tracker to track people
float averageGpa = 0;
int tracker = 0;

int main() {

  //use a while loop that keeps on going until you quit the program (change of int action when you enter a certain #), a nested switch statement that links numbers to a certain action (add, delete etc)
  int action = -1;
  while (action != 0) {
    cout << endl << "1:ADD 2:PRINT 3:DELETE 4:AVERAGE 5:QUIT" << endl;
    cin >> action;

    switch(action){
      case 1:
        add();
        break;
      case 2:
        cout << endl << "Student info: " << endl;
        print(head);
        break;
      case 3:
        remove();
        break;
      case 4:
        average(head);
        averageGpa = averageGpa/tracker;
        cout << "Average Gpa: " << averageGpa <<endl;
        break;
      case 5:
        action = 0;
        break;
    }
  }

}

/*
*
FUNCTIONS
*
*/

//ask for student info, and add then to the linked list
void add() {
  
  cout << endl << "Enter line by line: First Name, Last Name, Student ID & GPA!" << endl;
  char firstName[16];
  char lastName[16];
  int id;
  float gpa;
  cin >> firstName;
  cin >> lastName;
  cin >> id;
  cin >> gpa;

  Node* current = head;
  if (current == NULL) {
    head = new Node();
    head->setId(id);
    head->setGpa(gpa);
    head->setFirstName(firstName);
    head->setLastName(lastName);
  }
  else {
    while (current->getNext() != NULL) {
      current = current->getNext();
    }
    current->setNext(new Node());
    current->getNext()->setId(id);
  }
  
}

//go through the linked list, print out students info
void print(Node* next) {
  if (next != NULL) {
    cout 
    << "First Name: " << next->getFirstName() << endl
    << "Last Name: " << next->getLastName() << endl
    << "Id: " << next->getId() << endl 
    << "Gpa: " << next->getGpa() << endl;
    print(next->getNext());
  }
}

//go the linked list, and remove if the ID matches with the entered ID
void remove() {

  cout << endl << "Student ID" << endl;
  int id;
  cin >> id;

}

//loop through the linked list and add the GPA to a int (averageGpa) to find the average
void average(Node* next) {
  if (next != NULL) {
    averageGpa += next->getGpa();
    tracker++;
    average(next->getNext());
  }
}