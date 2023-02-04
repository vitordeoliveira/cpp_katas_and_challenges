// 383. Ransom Note
// Easy
// 3.6K
// 399
// Companies
// Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

// Each letter in magazine can only be used once in ransomNote.

 

// Example 1:

// Input: ransomNote = "a", magazine = "b"
// Output: false
// Example 2:

// Input: ransomNote = "aa", magazine = "ab"
// Output: false
// Example 3:

// Input: ransomNote = "aa", magazine = "aab"
// Output: true
 

// Constraints:

// 1 <= ransomNote.length, magazine.length <= 105
// ransomNote and magazine consist of lowercase English letters.


#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> d;

        for(auto &c:magazine){
            d[c]++;
        }

        for(auto &c:ransomNote){
            d[c]--;

            if(d[c] < 0) return false;
        }

        return true;
    }
};