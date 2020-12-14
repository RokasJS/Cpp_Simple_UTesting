#include <iostream>
#include "testing.hpp"
using namespace std;

// Function for reading and storing every test result
void f_Test(bool eval, string exact, string group, string name, test_result& result) {
    result.res = eval;
    result.group = group;
    result.name = name;
    result.exact = exact;
  }

// Function for reporting all test results
void ReportTests(test_result results[], int test_number){
    cout << "----------------------------" << endl;
    cout << "        Test Report         " << endl;
    cout << "----------------------------" << endl;
    for (int i = 0; i < test_number; i++) {
      if (!results[i].res) 
        cout << "Test Failed in group: " << results[i].group << " | name: " << results[i].name << " | exact line: " << results[i].exact <<endl;
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