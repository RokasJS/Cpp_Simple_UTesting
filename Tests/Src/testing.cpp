#include <iostream>
#include "testing.hpp"
using namespace std;

// Variables
res_list * head = NULL;
test_result results;

// Function for reading and storing every test result
void f_Test(bool eval, string exact, string group, string name) {
    results.res = eval;
    results.group = group;
    results.name = name;
    results.exact = exact;
    addToList(&head, results); // Append to list
}

// Function for appeding to the linked list
void addToList(res_list** head_ref, test_result data){
    res_list *new_node = new res_list();
    res_list *last = *head_ref;
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
    res_list * head_pl = head;
    cout << "----------------------------" << endl;
    cout << "        Test Report         " << endl;
    cout << "----------------------------" << endl;
    while (head_pl != NULL){
        if (!head_pl->data.res) 
            cout << "Test Failed in group: " << head_pl->data.group << " | name: " << head_pl->data.name << " | exact line: " << head_pl->data.exact <<endl;
        head_pl = head_pl->next;
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