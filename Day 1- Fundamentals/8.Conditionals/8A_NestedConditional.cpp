#include <bits/stdc++.h>
using namespace std;

int main() {
    int age = 18;
    char gender = 'F';

    if (age >= 18) {
        if (gender == 'F') {
            cout << "You are an adult female.";
        } else {
            cout << "You are an adult male.";
        }
    } else {
        cout << "You are not an adult.";
    }

    return 0;
}