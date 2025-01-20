// Math Functions in C++

// ### Overview
// The C++ standard library provides a wide range of mathematical functions that can be used to perform various mathematical
// operations. These functions are part of the `<cmath>` header file and can be used to perform tasks such as calculating
// square roots, logarithms, trigonometric functions, and more.

// ### Example of ceil(), floor(), sqrt(), abs(), pow()

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 7, b = 2;
    cout << ceil(a / (float)b) << "\n"; //type conversion
    cout << floor(a / (float)b) << "\n"; 
    cout << sqrt(a) << "\n"; 
    cout << abs(a - b) << "\n"; 
    cout << pow(a, b) << "\n"; 
    cout << min(a,b) << "\n";
    cout << max(a,b) << "\n";
    return 0;
}

/*Output: 4
          3
          2.64575
          5
          49  
          2
          7         */
//Challenge: Write a program that prints the square root of a number.