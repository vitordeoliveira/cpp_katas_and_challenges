// 350. Intersection of Two Arrays II
// Easy
// 5.9K
// 813
// Companies
// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

 

// Example 1:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2,2]
// Example 2:

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [4,9]
// Explanation: [9,4] is also accepted.

#include <map>
#include <vector>
#include <iostream>

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m;
        vector<int> r;

        for(auto key : nums1) {
            m[key]++;
        }

        for(auto n2: nums2){
            if(m[n2] > 0){
                m[n2]--;
                r.push_back(n2);
            }
        }

        return r;
    }
};

int main(){

}
