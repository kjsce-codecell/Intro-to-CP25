// Operators in C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10, b = 20;

    //Arithmetic
    cout << "a + b :"<< (a + b) << "\n";
    cout << "a - b :" << (a - b) << "\n";
    cout << "a * b :" << (a * b) << "\n";
    cout << "a / b :" << (a / (float)b) << "\n"; //type conversion
    cout << "a % b :" << (a % b) << "\n";

    //Increment or Decrement
    cout << "a++ :" << (a++) << "\n";
    cout << "a-- :" << (a--) << "\n";
    cout << "++a :" << (++a) << "\n";
    cout << "--a :" << (--a) << "\n";

    // Assignment Operators
    cout << "a+=2 :" << (a+=2) << "\n";
    cout << "a-=2 :" << (a-=2) << "\n";
    cout << "a*=2 :" << (a*=2) << "\n";
    cout << "a/=2 :" << (a/=2) << "\n";

    // Relational
    cout << "Is a > b ? " << (a > b) << "\n";

    // Logical
    cout << "Logical AND (a < b && b > 15): " << ((a < b) && (b > 15)) << "\n";

    return 0;
}

// Challenge: Write a C++ program that accepts two numbers from the user. Perform addition, subtraction, multiplication, division, and modulus operations.

// Extra Credit: Write a program that uses a ternary operator to check if the first number is greater than the second and print:"First number is larger.""Second number is larger."