// Pass by reference

#include <bits/stdc++.h>
using namespace std;

void changeValue(int &x) { 
    x = 20; 
    // Changes the original variable

    cout << "Inside function: x = " << x << endl;
}

int main() {
    int x = 10;
    cout << "Before function: x = " << x << endl;

    changeValue(x);
    // Called the function

    cout << "After function: x = " << x << endl;

    return 0;
}