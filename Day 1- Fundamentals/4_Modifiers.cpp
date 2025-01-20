//Modifiers in C++

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Integer Modifiers
    signed int a = -10;
    unsigned int b = 10;

    // Short and Long Integers
    short int c = 32767;        // Max value for short
    long int d = 1000000;        // Larger range
    long long int e = 9223372036854775807; // Max value for long long range

    // Floating-Point Modifiers
    float f = 3.14;
    long double g = 3.141592653589793238;

    cout << "Signed int: " << a << "\n";
    cout << "Unsigned int: " << b << "\n";
    cout << "Short int: " << c << "\n";
    cout << "Long int: " << d << "\n";
    cout << "Longer int: "<< e <<"\n";
    cout << "Float: " << f << "\n";
    cout << "Long double: " << g << "\n";

    return 0;
} 

/*Output: Signed int: -10
          Unsigned int: 10
          Short int: 32767
          Long int: 1000000
          Longer int: 9223372036854775807
          Float: 3.14
          Long double: 3.14159              */
/*Challenge: You’re building a treasure vault system for a game!
Use:
unsigned int for the gold coins (because they can’t be negative).
short int for the number of treasures (max 32767 treasures).
long long int for the total vault value (in billions).*/ 
