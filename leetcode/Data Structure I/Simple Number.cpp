// 136. Single Number
// Easy
// 13.4K
// 517
// Companies
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

 

// Example 1:

// Input: nums = [2,2,1]
// Output: 1
// Example 2:

// Input: nums = [4,1,2,1,2]
// Output: 4
// Example 3:

// Input: nums = [1]
// Output: 1
 

// Constraints:

// 1 <= nums.length <= 3 * 104
// -3 * 104 <= nums[i] <= 3 * 104
// Each element in the array appears twice except for one element which appears only once.

#include <vector>
using namespace std;
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         map<int, int> m;
//         for(auto x: nums){
//             m[x]++;
//         }

//         for(auto x: nums){
//             if(m[x] == 1){
//                 return x;
//             }
//         }

//         return nums[0];
//     }
// };

class Solution {
public:
    int singleNumber(const vector<int>& nums) {
        int ans = 0;
        for (int i : nums) {
            ans = i ^ ans;
        }
        return ans;
    }
};

int main(){
    Solution s;

    s.singleNumber({2,2,3,4,4,5,5});
}


