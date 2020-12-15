#include <iostream>
#include <cmath>
#include <string>
#include "testing.hpp"
using namespace std;

//Testines funkcijos
int Squared(int n) { return sqrt(n); } 
int TwoToPower(int n) { return pow(2,n); }






void TestBatch(test_result results){
    TEST(isEqual(Squared(16), 4), "Squared Check", "Nr1", results);
    TEST(isEqual(Squared(16), 5), "Squared Check", "Nr2", results);
    TEST(isEqual(Squared(64), 8), "Squared Check", "Nr3", results);
    TEST(isEqual(TwoToPower(2), 4), "TwoToPower Check", "Nr1", results);
    TEST(isEqual(TwoToPower(3), 8), "TwoToPower Check", "Nr2", results);
    TEST(isEqual(TwoToPower(5), 25), "TwoToPower Check", "Nr3", results);
}

  int main() {
    
    test_result results;
    TestBatch(results);
    ReportTests();
  }