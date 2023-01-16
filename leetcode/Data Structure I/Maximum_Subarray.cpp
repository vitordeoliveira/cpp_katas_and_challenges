// Given an integer array nums, find the 
// subarray
//  with the largest sum, and return its sum.

 

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.
// Example 2:

// Input: nums = [1]
// Output: 1
// Explanation: The subarray [1] has the largest sum 1.
// Example 3:

// Input: nums = [5,4,-1,7,8]
// Output: 23
// Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

// Kadane's Algorithm

#include <vector>
#include "iostream"
#include "limits.h"
 #include <numeric>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int mid = (nums.size()-1) / 2;
        int max_sum_r = INT_MIN;
        int max_sum_l = INT_MIN;
        int max_sum = INT_MIN;

        if( nums.size()==1 ) return nums[0];

        std::vector<int> s(6,0);

        // max_sum_r = maxSubArray(s);
        // max_sum_l = maxSubArray(std::vector<int>(nums.begin(), nums.begin()+mid));


        return 0;
    }
};

int main(){

    Solution s;

    std::vector<int> v = {1, 2, 6, 4};

    s.maxSubArray(v);

    return 0;
}