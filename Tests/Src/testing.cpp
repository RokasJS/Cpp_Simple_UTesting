#include <iostream>
#include "testing.hpp"
using namespace std;

// Function prototypes
void print(char *n);

// Variables
res_list * head = NULL;
test_result results;

// Classes
class TestFramework {   // Test framework class
public:
    virtual void printOut(char * n) {
        // Add custom print() function here
        print(n);
    } 
};

// Functions 

// Function for reading and storing every test result
void f_Test(bool eval, char * exact, char * group, char * name) {
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
    TestFramework Frame;
    Frame.printOut((char*)"----------------------------\n");
    Frame.printOut((char*)"        Test Report         \n");
    Frame.printOut((char*)"----------------------------\n");
    while (head_pl != NULL){
        if (!head_pl->data.res) {
            Frame.printOut((char*)"Test Failed in group: ");
            Frame.printOut(head_pl->data.group); 
            Frame.printOut((char*)" | name: ");
            Frame.printOut(head_pl->data.name); 
            Frame.printOut((char*)" | exact line: ");
            Frame.printOut(head_pl->data.exact);
            Frame.printOut((char*)"\n");
        }
        head_pl = head_pl->next;
    }
}

// Custom printout function
void print(char * n){
    cout << n;
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