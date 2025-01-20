//Part 1 is a basic program to understand function, Part 2 is to understand pass by value
//PART 1:

#include <bits/stdc++.h>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
	return a + b; 
	//return sum to main function
}
int main() { 
	//main function

	int num1 = 5, num2 = 10;
	cout << "The sum is: " << add(num1, num2) << "\n"; 
	//function call
	
	return 0;
}

// /*Challenge: Write a program in C++ to demonstrate a function that swaps the values of two integers. 
// Use a separate swap function and call it from the main function.*/
