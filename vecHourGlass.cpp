#include<vector>
#include <iostream>
#include<algorithm>

using namespace std;



int hourglassSum(vector<vector<int>> arr) {
    
    vector<int> sum;
  
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
			int top = arr[row][col] + arr[row][uint16_t(col + 1)] + arr[row][uint16_t (col + 2)];
			int mid = arr[uint16_t (row + 1)][uint16_t(col + 1)];
			int bottom = arr[uint16_t(row + 2)][col] + arr[uint16_t(row) + 2][uint16_t(col + 1)] + arr[uint16_t(row + 2)]
                [uint16_t(col + 2)];
			int total = top + mid + bottom;
            sum.push_back(total);
        }
    }
	return *max_element(sum.begin(), sum.end());
}

int main() {
    
    
    vector<vector<int>> arr{
        {1,1,1,0,0,1},
        {1,1,2,3,1,1},
        {1,1,1,0,0,0},
        {2,1,0,0,0,0},
        {0,0,0,0,1,1},
        {1,0,0,0,1,1}
    };

    

    int result = hourglassSum(arr);

    cout << result << "\n";



    return 0;

}

