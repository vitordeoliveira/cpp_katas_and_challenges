// 242. Valid Anagram
// Easy
// 8.1K
// 262
// Companies
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:

// Input: s = "rat", t = "car"
// Output: false


#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> d;

        if(s.size() != t.size()) return false;

        for(auto &c:s){
            d[c]++;
        }

        for(auto &c:t){
            d[c]--;

            if(d[c] < 0) return false;
        }

        return true;
    }
};


int main(){
    Solution s;

    s.isAnagram("anagram", "nagaram");
}