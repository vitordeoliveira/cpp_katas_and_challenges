// 169. Majority Element
// Easy
// 14.3K
// 439
// Companies
// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0, element=0;

        for(int num:nums){
            if(count==0){
                element=num;
            }
            if(num==element){
                count++;
            }
            else{
                count--;
            }
        }
        
        return element;
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        int res = 0;
        for(auto x: nums){
            m[x]++;
            if(m[x] > m[res]){
                res = x;
            }
        }

        return res;
    }
};