#include <iostream>
#include <string.h>
#include "calculator.h"
// #include "calculator.cpp"

using namespace std;

Calculator calc;
double a = 1.0;
double b = 4.0;



int main() {
    std::cout << "Add result:\n";
    std::cout << "a + b = " <<
        calc.Add(a, b) << std::endl;
    std::cout << "Sub result:\n";
    std::cout << "a - b = " <<
       calc.Sub(a, b) << std::endl;
    
    return 0;
}

