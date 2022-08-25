// https://www.hackerrank.com/challenges/mini-max-sum/problem
//To help any confused souls out there.

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

void minmax(vector<int>arr)
{
	int size = arr.size();			//Size of array to use in for loops
	sort(arr.begin(), arr.end());	//Sorting the array helps with proper summation, otherwise wrong sums
	vector<int> firstfour;			//Vector to hold first 4 elements of array arr[0]-arr[3]
	vector<int>secondfour;			//Vector to hold last 4 elements from back of array arr[1]-array[4]
	vector<int> firstSums;			//Vector to hold first 4 sums
	vector<int> secondSums;			//Vector to hold last 4 sums
	
	for (int i = 0; i < size-1; i++)	//For arr[0] to arr[3], increment and push_back into first four vector
	{
		firstfour.push_back(arr[i]);

	}
	for (int j = size-1; j >= size-4; j--)	//For arr[4] to arr[1], decrement and push_back to second four vector
	{
		secondfour.push_back(arr[j]);
	}
	
	
	auto firstfoursum = accumulate(firstfour.begin(), firstfour.end(), 0ll);	//use accumulat to sum each vector, 0ll means sum = 0, long long size
																				//to store large numbers (smaller data types return negative results)
	auto secondfoursum = accumulate(secondfour.begin(), secondfour.end(), 0ll);

	cout << firstfoursum << " "<< secondfoursum;
}


int main()
{
	//Used large numbers to test for larger samples.
	vector<int>nums { 793810624,895642170,685903712,623789054,468592370 };
	minmax(nums);

	return 0;
}
