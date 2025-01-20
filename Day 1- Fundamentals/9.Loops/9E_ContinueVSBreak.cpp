//Continue and Break
//Continue: It skips the current iteration and moves to the next iteration
//Break: It stops the loop and moves to the next statement after the loop

#include <bits/stdc++.h>
using namespace std;
int main() {
    for (int i = 1; i <= 5; i++) { 
        // Loop from 1 to 5

        if(i==2) continue; 
        // Skip the current iteration if i is 2

        if(i==4) break; 
        // Stop the loop if i is 4

        cout << i << " "; 
        // Print the current value of i
    }
    return 0;
}

//Output: 1 3 