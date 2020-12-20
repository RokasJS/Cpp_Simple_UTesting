#ifndef TESTING_HPP_INCLUDED
#define TESTING_HPP_INCLUDED

// Struct for holding test results
struct test_result {
    bool res;
    char * group;
    char * name;
    char * exact;
  };

// Linked list node class
class res_list {
  public:
    test_result data;
    res_list *next;
};

// Macro function for every individual test
void f_Test(bool chk, char * exact, char * group, char * name);
#define TEST(check, group, name)  \
f_Test(check, #check, group, name)

// Function for appending to linked list
void addToList(res_list** head_ref, test_result data);

// Various assert functions
bool isEqual(int a, int b);     // Checks if a=b
bool isMoreThan(int a, int b);  // Checks if a>b

// Function for reporting all test results
void ReportTests();

#endif