#include "testing.hpp"
#include <iostream>
#include "main.hpp"
using namespace std;

// Variables
int groupCounter;
// Classes
class TestFramework {   // Test framework class
public:
    virtual void printOut(char * n) {
        // Add custom print() function here
        print(n);
    } 
};

// Group class
group::group(char * t)
{
    groupCounter++;
    head=nullptr;
    next=nullptr;
    groupName = t;
}
void group::appendTo(test_result value) // Function for appending to link list
{
    node *temp=new node;
    temp->data=value;
    temp->next=nullptr;
    if(head==nullptr)
    {
        head=temp;
        next=temp;
        temp=nullptr;
    }
    else
    {	
        next->next=temp;
        next=temp;
    }
}
void group::report()    //Function for reporting results
{
    int correct_counter = 0;
    int bad_counter = 0;
    int ret;
    char buff[20];
    TestFramework Frame;
    node *temp=new node;
    temp=head;
    Frame.printOut("----------------------------\n");
    Frame.printOut("Group report: ");
    Frame.printOut(groupName);
    Frame.printOut("\n----------------------------\n");
    while(temp!=nullptr)
    {
        if (!temp->data.res) {
            bad_counter++;
            Frame.printOut("Test Failed: "); 
            Frame.printOut(temp->data.exact);
            Frame.printOut("\n");
        }
        else
            correct_counter++;
        temp=temp->next;
        
    }
    Frame.printOut("\n");
    Frame.printOut("Passed tests: ");
    convertChar(correct_counter, buff);
    Frame.printOut(buff);
    Frame.printOut("\n");
    Frame.printOut("Failed tests: ");
    convertChar(bad_counter, buff);
    Frame.printOut(buff);
    Frame.printOut("\n");
}
void group::f_Test(bool eval, char * exact){    // Function for reading and storing every test result
    test_result results;
    results.res = eval;
    results.exact = exact;
    appendTo(results);
} 

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
