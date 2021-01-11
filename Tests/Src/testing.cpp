#include "testing.hpp"
#include "main.hpp"

//----------------Variables------------------
LList<group*> groupCounter;
//---------------Class methods---------------
// Allows for outside char * output functions
void TestFramework::printOut(const char* n) {
    // Add custom print() function here
    print(n);
} 

// New group creation function
group::group(const char * t) {
    groupCounter.appendTo(this);
    groupName = t;
}

// Report group results
void group::report(){
    int correct_counter = 0;
    int bad_counter = 0;
    int ret;
    char buff[20];
    TestFramework Frame;
    node<test_result> *temp=new node<test_result>;
    temp=head;
    Frame.printOut("----------------------------\n");
    Frame.printOut("Group report: ");
    Frame.printOut(groupName);
    Frame.printOut("\n----------------------------\n");
    while(temp!=nullptr)
    {
        if (!temp->data.res){
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

// Read and store every test result in group
void group::f_Test(bool eval, const char * exact){
    test_result results;
    results.res = eval;
    results.exact = exact;
    appendTo(results);
} 

//----------------Functions------------------
// Int to char* conversion
char *convertChar(int number, char *buff){
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

// Report all results
void report_all(){
    node<group*>* temp = new node<group*>;
    temp=groupCounter.head;
    while(temp!=nullptr){
        temp->data->report();
        temp=temp->next;
    }
}