// Using auto keyword

#include <bits/stdc++.h>
using namespace std;

int main(){
    auto a = 42;          
    // Compiler deduces int

    auto b = 3.14;       
    // Compiler deduces double

    auto c = "Hello";       
    // Compiler deduces const char

    cout << "Number: " << a << "\n";
    cout << "Decimal: " << b << "\n";
    cout << "Text: " << c << "\n";
    
    return 0;
}

/*Output: Number: 42
          Decimal: 3.14
          Text: Hello                       */
// Challenge: Write a C++ program that uses auto to declare variables of different types (int, float, string)

// Extra Credit: Write a program that uses auto to initialize a vector<int> with values {5, 10, 15}.