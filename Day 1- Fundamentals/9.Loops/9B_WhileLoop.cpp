//2. WHILE LOOP:

#include <iostream>
using namespace std;
int main() {
    int x = 1; 
    // Initialize a variable to control the loop.
    
    // A while loop keeps running as long as the condition (x <= 5) is true.
    while (x <= 5) {

        cout << x << "\n";
        // Print the current value of 'x' to the console.

        x++; 
        // Increment 'x' to eventually meet the exit condition.
    }
    return 0;
    // This loop is like saying, "Keep going until the condition is no longer true."
}
/*output: 1
          2
          3
          4
          5 */
