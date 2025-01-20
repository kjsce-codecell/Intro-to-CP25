#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    //this is how you input a string
    
    int l = s.length(); //function to calculate the length of the string
    
    cout << "The length of the string is: " << l << endl;
    
    //Test: What will the code output for the string "Competitive"?
    
    //Functions in String, consider the string H3LLo!

    s = "H3LLo"; //re-initialize the string S
    
    bool IsEmpty = s.empty(); //answer: false
    
    s.push_back('!'); //doesn't do anything, ! is already at the end.
    s.push_back('?'); //adds a ? to the end
    
    cout << s << endl;
    
    s.pop_back(); //removes the last character.
    
    cout << s << endl;
    
    //Join two string together
    string s1 = "My CP skills are ";
    string s2 = "amazing!";
    
    s1.append(s2);
    cout << s1 << endl; //prints My CP skills are amazing!
    
    string newstring = "Codecell";
    cout << newstring.substr(0, 4) << endl;
    //Guess what this prints?
    
    cout << newstring.find("cell") << endl;
    cout << newstring.find("Cell") << endl; 
    //Guess the output
    
    isalnum('a'); //returns true
    isalnum('2'); //true
    isalnum('!'); //false
    
    isalpha('s'); 
    
    isdigit('2');
    
    
    return 0;
}
