#include <iostream>
#include <cmath>
#include "testing.hpp"
using namespace std;

// Math functions to test
int Squared(int n) { return sqrt(n); } 
int TwoToPower(int n) { return pow(2,n); }

// Function for running a batch of tests

// TEST(condition, group, name)
void TestBatch(){
  TEST(Squared(16) == 4, "Squared Check", "Nr1");
  TEST(Squared(16) == 5, "Squared Check", "Nr2");
  TEST(Squared(64) == 8, "Squared Check", "Nr3");
  TEST(TwoToPower(2) == 4, "TwoToPower Check", "Nr1");
  TEST(TwoToPower(3) == 8, "TwoToPower Check", "Nr2");
  TEST(TwoToPower(5) == 25, "TwoToPower Check", "Nr3");
}

int main() {
 TestBatch();
 ReportTests();
}