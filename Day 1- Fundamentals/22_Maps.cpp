//Maps in C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string,string> dictionary;

    dictionary["coding"] = "the process of assigning a code to something for classification or identification"; 
    dictionary["cpp"] = "a general-purpose, object-oriented programming language that's used to build software"; //assigning word definitions

    dictionary["coding"] = "the process or activity of writing computer programs"; //changes the original definition of coding
    
    cout << "The definition of cpp is " << dictionary["coding"];
}