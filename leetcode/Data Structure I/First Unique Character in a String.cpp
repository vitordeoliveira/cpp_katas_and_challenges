// 387. First Unique Character in a String
// Easy
// 7.3K
// 249
// Companies
// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

// Example 1:

// Input: s = "leetcode"
// Output: 0
// Example 2:

// Input: s = "loveleetcode"
// Output: 2
// Example 3:

// Input: s = "aabb"
// Output: -1

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
        unordered_map<char, int> m;

        for (auto &c : s)
        {
            m[c]++;
        }

        for (auto i = 0; i < s.size(); i++)
        {
            if (m[s[i]] == 1)
                return i;
        }

        return -1;
    }
};

int main()
{

    Solution s;

    int a = s.firstUniqChar("aaa");
}