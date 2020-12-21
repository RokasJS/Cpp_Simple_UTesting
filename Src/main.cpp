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
// TEST(condition, group, name)

TEST_G(Squared_Check){
  TEST(Squared(16) == 4, point_Squared_Check);
  TEST(Squared(16) == 5, point_Squared_Check);
  TEST(Squared(64) == 8, point_Squared_Check);
}END

TEST_G(Power_Check){
  TEST(TwoToPower(3) == 8, point_Power_Check);
  TEST(TwoToPower(3) == 9, point_Power_Check);
  TEST(TwoToPower(3) == 10, point_Power_Check);
}END


// Custom printout function
void print(char * n){
    cout << n;
}

int main() {
  test__Squared_Check();
  test__Power_Check();
  group_Squared_Check.display();
  group_Power_Check.display();
}