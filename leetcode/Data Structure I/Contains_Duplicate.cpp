#include <map>
#include <iostream>
#include <cassert>
#include <vector>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        // ios_base::sync_with_stdio(0);
        // cin.tie(0);
        // cout.tie(0);
        std::map<int, int> m;

        for(int a : nums){

            m[a] = m[a]+1;
            if(m[a] > 1) return true;
        }

        return false;
    }
};

int main(){

    Solution s;
    std::vector<int> v = {1, 1, 3, 4};

    std::cout << s.containsDuplicate(v);

}