//Sets in C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> set1;
    
    set1.insert(3); 
    // 3 is inserted to the set

    set1.insert(5); 
    // 5 is inserted to the set

    set1.insert(29); 
    // 29 is inserted to the set

    set1.insert(3); 
    // 3 is not inserted to the set as it is already present

    for(int x: set1) cout << x << '\n'; 
    // Outputs all values stored in the set

    set1.erase(3);
    //5 will be erased from the set

    for(int x: set1) cout << x << '\n';

    for(int i = -5000; i <= 5000; i++) set1.insert(i); 
    //adding a lot of values 

    if(set1.find(5) != set1.end()){
        cout << "5 is present in the set" << '\n'; 
        //Element is found as it is not at the end of the set
    }
}