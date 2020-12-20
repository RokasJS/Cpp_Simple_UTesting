#include "testing.hpp"
#include "main.hpp"
using namespace std;

// Variables
res_list * head = nullptr;
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

// Convert int to char*
char *convertChar(int number, char *buff)
{
    if (number / 10 == 0) {
        *buff++ = number + '0';
        *buff = '\0';
        return buff;
    }

    buff = convertChar(number / 10, buff);
    *buff++ = number % 10 + '0';
    *buff = '\0';
    return buff;
}

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
    new_node->next = nullptr;

    if(*head_ref == nullptr){
        *head_ref = new_node;
        return;
    }
    while (last->next != nullptr)
        last = last->next;

    last->next = new_node;
    return;

}

// Function for reporting all test results
void ReportTests(){
    int correct_counter = 0;
    int bad_counter = 0;
    int ret;
    char buff[20];
    res_list * head_pl = head;
    TestFramework Frame;
    Frame.printOut("----------------------------\n");
    Frame.printOut("        Test Report         \n");
    Frame.printOut("----------------------------\n");
    while (head_pl != nullptr){
        if (!head_pl->data.res) {
            bad_counter++;
            Frame.printOut("Test Failed in group: ");
            Frame.printOut(head_pl->data.group); 
            Frame.printOut(" | name: ");
            Frame.printOut(head_pl->data.name); 
            Frame.printOut(" | exact line: ");
            Frame.printOut(head_pl->data.exact);
            Frame.printOut("\n");
        }
        else
            correct_counter++;
        head_pl = head_pl->next;
    }
    Frame.printOut("----------------------------\n");
    Frame.printOut("Passed tests: ");
    convertChar(correct_counter, buff);
    Frame.printOut(buff);
    Frame.printOut("\n");
    Frame.printOut("Failed tests: ");
    convertChar(bad_counter, buff);
    Frame.printOut(buff);
}

