#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int> nums, int target)
{
    vector<int> result;
    for(int i = 0; i < nums.size() - 1; i++) {
        for(int j = i+1; j < nums.size(); j++) {
            if(nums[i] + nums[j] == target) {
                result.push_back(i);
                result.push_back(j);
            };
        }
    }

    return result;
}

int main()
{
    // Your main function code here
    vector<int> result = twoSum({7, 2, 3, 5, 1}, 7);
    cout << result[0] << " " << result[1];
    return 0;
}
