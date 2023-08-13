// Array in C++ - is data strcuture used to store multiple values of the same data type

/*
1. The element in an array are stored at contiguous memory locations
2. Arrays have random access - elements can be directly accessed through index
3. Arrays have cache friendliness - arrays have better cache locality that can make a pretty big difference in performance
*/

/*
The size of the array is fixed and the memory for an array needs to be allcoated
before use, the size of an array cannot be increased dynamically.
*/

// Array declaration
// dataType arrayName[arraySize];
// array indexes from 0 to n-1, where n is size of the array

// array traversal or traversal of a data strucutre - is basically going through each and every element from start to end

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; // let n is the size of the array
	// arrray declarations
	string arr1[n]; // an array of strings
	int arr2[n]; // an array of integers
	bool arr3[n]; // an array of boolean values
	float arr4[n]; // an array of floats/decimal values of 32 bit
	double arr5[n]; // an array of doubles/decimal values of 64 bit
	char arr6[n]; // an array of characters
}

