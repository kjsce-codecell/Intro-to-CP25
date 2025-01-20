// Using find() in C++

#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> vec1 = {5,41,24,1,9,14,2};

    auto it = find(vec1.begin(), vec1.end(), 14); 
    //Finding the position of 14 in vec1


    if(it != vec1.end()) 
    //If 14 is found in vec1
    {
        cout << *it <<" is present in the vector at index "; 
        cout << it-vec1.begin() << "\n"; 
        //Output: 14 is present in the vector at index _
    }
    else
    {
        cout << "14 is not present in the vector" << '\n'; 
        //Output: 14 is not present in the vector
    }
    //it-vec1.begin()
    return 0;
}

//Output: 14 is present in the vector at index 5