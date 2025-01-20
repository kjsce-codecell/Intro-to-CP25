#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {10, 20, 30, 40, 50};

    // Constant Time O(1)
    cout << "First Element : " << arr[0] <<"\n";  
    // Always takes the same time


    //Linear Time O(n)
    int n = sizeof(arr) / sizeof(arr[0]); // calculates the number of elements in an array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Iterating through all elements
    }
    cout<<"\n";
    //The runtime grows proportionally with the input size


    //Quadratic Time O(n²)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "(" << i << ", " << j << ")" << endl;
        }
    }
    //The runtime grows quadratically due to nested loops
}