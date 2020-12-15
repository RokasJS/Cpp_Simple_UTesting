#include <iostream>
#include "testing.hpp"
using namespace std;

Node * head = NULL;
// Function for reading and storing every test result
void f_Test(bool eval, string exact, string group, string name, test_result& result) {
    result.res = eval;
    result.group = group;
    result.name = name;
    result.exact = exact;

    addToList(&head, result);
}

void addToList(Node** head_ref, test_result data){
  Node *new_node = new Node();
  Node *last = *head_ref;
  new_node->data = data;
  new_node->next = NULL;

  if(*head_ref == NULL){
    *head_ref = new_node;
    return;
  }
  while (last->next != NULL)
    last = last->next;

  last->next = new_node;
  return;

}
// Function for reporting all test results
void ReportTests(){
    cout << "----------------------------" << endl;
    cout << "        Test Report         " << endl;
    cout << "----------------------------" << endl;
    while (head != NULL){
        if (!head->data.res) 
            cout << "Test Failed in group: " << head->data.group << " | name: " << head->data.name << " | exact line: " << head->data.exact <<endl;
        head = head->next;
    }
}

//-------------Various assert functions----------------

// Check if a=b
bool isEqual(int a, int b){
    if (a == b)
        return 1;
    return 0;
}

// Check if a>b
bool isMoreThan(int a, int b){
    if (a > b)
        return 1;
    return 0;
}