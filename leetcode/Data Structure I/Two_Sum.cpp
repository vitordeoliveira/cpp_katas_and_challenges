// 1. Two Sum
// Easy
// Companies
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

#include <vector>
#include <iostream>
#include <bits/stdc++.h>
#include <map>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        std::map<int, int> m;
        target;

        int index = 0;
        for (auto n : nums)
        {
            m[index++] = n;
        }
        sort(nums.begin(), nums.end());

        

        return nums;
    }

    void printvec(std::vector<int> nums)
    {
        for (int n : nums)
        {
            std::cout << n << "\n";
        }
    }
};

int main()
{
    Solution s;

    std::vector<int> v = {1, 2, 6, 4};
    s.twoSum(v, 3);
    s.printvec(v);
}