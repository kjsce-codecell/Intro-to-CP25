// Control Flow
// If-else

#include <bits/stdc++.h>
using namespace std;    
int main() {
    int a = 10;
    if (a >= 0) { 
        // Checks if condition inside () is true

        cout << "Positive" << "\n";
    } else {    
        // Executes if condition is false

        cout << "Negative" << "\n";
    }

// if-else-if-else

    int b = 10;
    if (b > 10) {    
        // Checks if condition is true

        cout << "Greater than 10" << "\n";
    } else if (b < 10) {    
        // Executes if all above conditions are false and the provided statement is true
        // Can have many else if statements between if and else statements

        cout << "Less than 10" << "\n";
    } else {    
        // Executes if all conditions above are false

        cout << "Equal to 10" << "\n";
    }
    
    return 0;
}

/* Output: Positive
           Equal to 10

Challenge: Write a program that takes a number as input and prints whether it's positive, negative, or zero.              */