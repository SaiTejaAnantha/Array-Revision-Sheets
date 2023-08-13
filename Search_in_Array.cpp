// Searching in an Array, Time Complexity - O(n)
// Searching for an element in an array means to check if a given element is present in the array or not
// This can be done by accessing elements of the array one by one starting from the first element and checking whether any of the elements matches with the given element to be searched
// we can use loops to perform the above operation of array traversal and access the elements, using indexes

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, element_to_be_searched, arr[n];
	for (int i=0;i<n;i++)
	{
		if (arr[i] == element_to_be_searched)
		{
			cout << "Element Found";
		}
		else
		{
			cout << "Element not Found";
		}
	}
}
