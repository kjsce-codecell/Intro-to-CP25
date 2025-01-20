//4. FOREACH LOOP:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5}; // Initialize an array

    // A Foreach loop interates through all values stored in the array 
    // and executes the code closed within on each element of the array

    for (int i: arr)     
    // Syntax for initialising the foreach loop
    {
        cout << i << ' ';   
        // Outputs the array
    }
    return 0;
}
    
// Output: 1 2 3 4 5 
// The loop iterates through all the elements in the array and prints them out
// It stops after it has iterated through all of them

/*Challenge: Write a program that takes the input of 8 integers,
  store them in an array and print the cumulitive sum of elements
  
  Example:
  Input: arr[8] = {1,2,3,4,5,6,7,8}
  Output: 1 3 6 10 15 21 28 36                                     */