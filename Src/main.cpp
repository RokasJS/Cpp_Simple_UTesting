#include <iostream>
#include <cmath>
#include "main.hpp"
#include "testing.hpp"
using namespace std;

// Function prototypes
void print(char *n);

// res_list * TwoToPower_Check = nullptr;
// Math functions to test
int Squared(int n) { return sqrt(n); } 
int TwoToPower(int n) { return pow(2,n); }

NEW_GROUP(Squared_Check);
NEW_GROUP(Power_Check);

// Function for running a batch of tests
// TEST(condition, group)
TEST_G(Squared_Check){
  TEST(Squared(16) == 4);
  TEST(Squared(16) == 5);
  TEST(Squared(64) == 9);
}END

TEST_G(Power_Check){
  TEST(TwoToPower(3) == 8);
  TEST(TwoToPower(3) == 9);
  TEST(TwoToPower(4) == 16);
}END


// Custom printout function
void print(char * n){
    cout << n;
}

int main() {
  test__Squared_Check();
  test__Power_Check();
  Squared_Check->report();
  Power_Check->report();
  //ReportTests(Squared_Check);
  //ReportTests(Power_Check);
}