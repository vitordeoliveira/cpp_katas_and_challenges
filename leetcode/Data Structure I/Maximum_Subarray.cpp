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

using namespace std;


class Solution
{
public:
    int maxSubArray(const vector<int> &nums)
    {
        int currentMax = 0;
        int maxTillNow = INT_MIN;
        for (auto c : nums)
            currentMax = max(c, currentMax + c),
            maxTillNow = max(maxTillNow, currentMax);
        return maxTillNow;
    }
};


// class Solution
// {
// public:
//     int maxSubArray(const std::vector<int> &nums)
//     {
//         int mid = nums.size() / 2;
//         int max_sum_r = INT_MIN;
//         int max_sum_l = INT_MIN;
//         int max_sum = INT_MIN;
//         int sum = INT_MIN;

//         if (nums.size() == 1)
//         {
//             return nums[mid];
//         }

//         max_sum_r = maxSubArray(std::vector<int>(nums.begin() + mid, nums.end()));
//         max_sum_l = maxSubArray(std::vector<int>(nums.begin(), nums.begin() + mid));

//         max_sum = max_sum_r+max_sum_l;
//         max_sum = std::max(max_sum, max_sum_r);
//         max_sum = std::max(max_sum, max_sum_l);

//         return max_sum;
//     }

//     void print(const std::vector<int> &nums, char c)
//     {
//         std::cout << c << ": ";

//         for (auto n : nums)
//         {
//             std::cout << n << ", ";
//         }
//         std::cout << "\n\n";
//     }
// };


int main()
{

    Solution s;

    std::vector<int> v = {-2,1, -10 ,4};

    std::cout << s.maxSubArray(v);

    return 0;
}