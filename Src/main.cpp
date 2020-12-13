#include <iostream>
#include "testing.hpp"
using namespace std;

void tests(int a, int b){
    if (a==b)
        std::cout<<"Works!!!\n";
}

int main() {
    //tests(2,2);
    testing::test();
    return 0;
}