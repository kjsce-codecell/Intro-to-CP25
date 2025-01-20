//Sorting in c++

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec1 = {5,41,24,1,9,14,2};

    sort(vec1.begin(),vec1.end()); 
    //Sorting vec1 from its beginning index to its end index

    for(int num: vec1) cout << num << " "; 
    // Outputs the vector    

    return 0;
}

//Output: 1 2 5 9 14 24 41