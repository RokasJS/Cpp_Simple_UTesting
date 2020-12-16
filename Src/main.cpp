#include <iostream>
#include <cmath>
#include "testing.hpp"
using namespace std;

// Math functions to test
int Squared(int n) { return sqrt(n); } 
int TwoToPower(int n) { return pow(2,n); }

// Function for running a batch of tests
void TestBatch(){
  TEST(isEqual(Squared(16), 4), "Squared Check", "Nr1");
  TEST(isEqual(Squared(16), 5), "Squared Check", "Nr2");
  TEST(isEqual(Squared(64), 8), "Squared Check", "Nr3");
  TEST(isEqual(TwoToPower(2), 4), "TwoToPower Check", "Nr1");
  TEST(isEqual(TwoToPower(3), 8), "TwoToPower Check", "Nr2");
  TEST(isEqual(TwoToPower(5), 25), "TwoToPower Check", "Nr3");
}

int main() {
 TestBatch();
 ReportTests();
}