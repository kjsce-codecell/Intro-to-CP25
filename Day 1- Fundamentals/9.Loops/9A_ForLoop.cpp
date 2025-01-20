//1. FOR LOOP:


#include <iostream>
using namespace std;
int main() {

    // The for loop is ideal when the number of iterations is known beforehand.
    // Here, 'i' starts at 1 and increments until it reaches 5 (inclusive).
    for (int i = 1; i <= 5; i++) {

        cout << "Iteration " << i << "\n";
        // Print the current iteration number to the console.
    }
    return 0;
     
     // This loop efficiently repeats the logic for five iterations
     //Output: Iteration 1
     //        Iteration 2
     //        Iteration 3
     //        Iteration 4
     //        Iteration 5
}
//Challenge: Write a program that prints the numbers from 1 to 10 using a for loop