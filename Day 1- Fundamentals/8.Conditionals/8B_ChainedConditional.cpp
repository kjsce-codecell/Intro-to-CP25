#include <bits/stdc++.h>
using namespace std;

int main() {
    int marks = 85;

    if (marks >= 90) {
        cout << "Grade: A+";
    } else if (marks >= 75) {
        cout << "Grade: A";
    } else if (marks >= 50) {
        cout << "Grade: B";
    } else {
        cout << "Grade: F";
    }

    return 0;
}