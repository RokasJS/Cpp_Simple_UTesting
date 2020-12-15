#ifndef TESTING_HPP_INCLUDED
#define TESTING_HPP_INCLUDED
#include <iostream>

// Struct for holding test results
struct test_result {
    bool res;
    std::string group;
    std::string name;
    std::string exact;
  };

class Node {
  public:
    test_result data;
    Node *next;
};

// Macro function for every individual test
void f_Test(bool chk, std::string exact, std::string group, std::string name, test_result& result);
#define TEST(check, group, name, result)  \
f_Test(check, #check, group, name, result)
void addToList(Node** head_ref, test_result data);
// Various assert functions
bool isEqual(int a, int b);     // Checks if a=b
bool isMoreThan(int a, int b);  // Checks if a>b

// Function for reporting all test results
void ReportTests();

#endif