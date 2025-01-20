#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {10, 20, 30, 40, 50};
     //Linear Time O(n)
    int n = sizeof(arr) / sizeof(arr[0]); // calculates the number of elements in an array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Iterating through all elements
    }
    cout<<"\n";
    //The runtime grows proportionally with the input size
    return 0;
}