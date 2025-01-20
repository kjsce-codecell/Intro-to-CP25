// Pointers
// Pointer is a variable which stores the memory address of another variable

// & address-of operator
// * dereference operator

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 10;

    int *pNum = &num; 
    // Initialized a pointer called pNum

    cout << pNum << "\n"; 
    // Printed the memory address of the variable

    cout << *pNum << "\n"; 
    // Printed the value of variable num by dereferencing a pointer

    return 0;
}

// Output: 
// <memory address>
// 10