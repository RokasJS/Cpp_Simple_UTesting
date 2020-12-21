#include <iostream>
#include "testing.hpp"
#include "main.hpp"
using namespace std;

// Variables

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



// Function for appeding to the linked list
// void addToList(res_list** head_ref, test_result data){
//     res_list *new_node = new res_list();
//     res_list *last = *head_ref;
//     new_node->data = data;
//     new_node->next = nullptr;

//     if(*head_ref == nullptr){
//         *head_ref = new_node;
//         return;
//     }
//     while (last->next != nullptr)
//         last = last->next;

//     last->next = new_node;
//     return;

// }

// list::list()
// {
//     head=nullptr;
//     tail=nullptr;
// }
// void list::createnode(test_result value)
// {
//     node *temp=new node;
//     temp->data=value;
//     temp->next=nullptr;
//     if(head==nullptr)
//     {
//         head=temp;
//         tail=temp;
//         temp=nullptr;
//     }
//     else
//     {	
//         tail->next=temp;
//         tail=temp;
//     }
// }
// void list::display()
// {
//     node *temp=new node;
//     temp=head;
//     cout<<"wtf1"<<endl;
//     while(temp!=nullptr)
//     {
//         cout<<"wtf"<<endl;
//         cout<<temp->data.exact<<"\n";
//         temp=temp->next;
//     }
// }

// Function for reading and storing every test result
void f_Test(bool eval, char * exact, list * groups) {
    test_result results;
    results.res = eval;
    results.exact = exact;
    groups->createnode(results);
}
// Function for reporting all test results
// void ReportTests(res_list * group){
//     int correct_counter = 0;
//     int bad_counter = 0;
//     int ret;
//     char buff[20];
//     res_list * head_pl = group;
//     TestFramework Frame;
//     Frame.printOut("----------------------------\n");
//     Frame.printOut("        Test Report         \n");
//     Frame.printOut("----------------------------\n");
//     while (head_pl != nullptr){
//         if (!head_pl->data.res) {
//             bad_counter++;
//             Frame.printOut("Test Failed in group: ");
//             Frame.printOut(head_pl->data.group); 
//             Frame.printOut(" | name: ");
//             Frame.printOut(head_pl->data.name); 
//             Frame.printOut(" | exact line: ");
//             Frame.printOut(head_pl->data.exact);
//             Frame.printOut("\n");
//         }
//         else
//             correct_counter++;
//         head_pl = head_pl->next;
//     }
//     Frame.printOut("----------------------------\n");
//     Frame.printOut("Passed tests: ");
//     convertChar(correct_counter, buff);
//     Frame.printOut(buff);
//     Frame.printOut("\n");
//     Frame.printOut("Failed tests: ");
//     convertChar(bad_counter, buff);
//     Frame.printOut(buff);
// }

