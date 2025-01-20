#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // calculates the number of elements in an array
    //Quadratic Time O(n²)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "(" << i << ", " << j << ")" << endl;
        }
    }
    //The runtime grows quadratically due to nested loops
}