#include <iostream>
#include<algorithm>
#include <cmath>
#include <iomanip>
#include <vector>


using namespace std;

void Ratios(vector <int> arr){
	
	int size = arr.size();
	float positiveRatio = 0;
	float negRatio = 0;
	float zeroRatio = 0;
	
	for (int i = 0; i <size; i++)
	{
		
		if (arr[i] > 0)
		{
			positiveRatio++;
		}
		else if (arr[i] < 0)
		{
			negRatio++;
		}
		else if(arr[i] ==0)
		{
			zeroRatio++;
			
		}
		
	}
	
	cout <<fixed<<setprecision(6)<< (positiveRatio/size) << endl;
	cout <<fixed<< setprecision(6) << (negRatio / size) << endl;
	cout  <<fixed<< setprecision(6) << (zeroRatio / size) << endl;
	
	
}

int main()
{
	
	vector<int> arr{ 1,1,0,-2,-2 };
	
	Ratios(arr);

	return 0;
	
}