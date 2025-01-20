// Arrays in C++
// Arrays are used to store multiple values of the same data type in a single variable.

#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // Declaring and initializing an array of size 5

    cout << arr[0] << "\n"; // Output: 1
    cout << arr[1] << "\n"; // Output: 2
    cout << arr[2] << "\n"; // Output: 3
    return 0;
}

//Challenge: Write a program that takes an array of integers as input and prints the sum of all the elements in the array.
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[5]; // Declaring an array of size 5

//     for (int i = 0; i < 5; i++) {
//         cin >> arr[i]; // Taking input for each element of the array
//     }

//     int sum = 0;
//     for (int i = 0; i < 5; i++) {
//         sum += arr[i]; // Adding each element to the sum
//     }

//     cout << "Sum: " << sum << "\n"; // Output: Sum: 15

//     return 0;
// }