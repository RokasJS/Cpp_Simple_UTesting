#include <iostream>
#include <cmath>
#include "main.hpp"
#include "testing.hpp"

// Custom printout function
void print(const char * n){ std::cout << n; }

// Math functions for testing
int Squared(int n) { return sqrt(n); } 
int TwoToPower(int n) { return pow(2,n); }
int Addition(int a, int b) { return a+b; }
int Subtraction(int a, int b) { return a-b; }

// Create new groups
NEW_GROUP(Squared_Check);
NEW_GROUP(Power_Check);
NEW_GROUP(Addition_Check);
NEW_GROUP(Subtraction_Check);

// Test 1st group 
TEST_G(Squared_Check){
  TEST(Squared(16) == 4);
  TEST(Squared(16) == 5);
  TEST(Squared(64) == 9);
}END

// Test 2nd group 
TEST_G(Power_Check){
  TEST(TwoToPower(3) == 8);
  TEST(TwoToPower(3) == 9);
  TEST(TwoToPower(4) == 16);
}END

// Self-Test function
void self_test(){
  // Use 3rd group
  USING_GROUP(Addition_Check);
  TEST(Addition(1,1) == 2);
  TEST(Addition(2,1) == 1);
  TEST(Addition(2,2) == 5);
  // Switch to 4th group
  CHANGE_GROUP(Subtraction_Check);
  TEST(Subtraction(5,1) == 7);
  TEST(Subtraction(2,2) == 0);
  TEST(Subtraction(4,1) == 2);
}

// Main function
int main() {
  self_test();
  REPORT_ALL;
  // REPORT(Squared_Check);
  // REPORT(Power_Check);
  // REPORT(Addition_Check);
  // REPORT(Subtraction_Check);
}