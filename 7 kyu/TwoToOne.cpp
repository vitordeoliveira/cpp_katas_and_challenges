// Take 2 strings s1 and s2 including only letters from ato z. Return a new sorted string,
// the longest possible, containing distinct letters - each taken only once - coming from s1 or s2.

// Examples:
// a = "xyaabbbccccdefww"
// b = "xxxxyyyyabklmopq"
// longest(a, b) -> "abcdefklmopqwxy"

// a = "abcdefghijklmnopqrstuvwxyz"
// longest(a, a) -> "abcdefghijklmnopqrstuvwxyz"

#include <set>
#include <string>
#include <iostream>

// class TwoToOne
// {
// public:
//     static std::string longest(const std::string &s1, const std::string &s2)
//     {
//         std::set<char> se;
//         se.insert(s1.begin(), s1.end());
//         se.insert(s2.begin(), s2.end());

//         return std::string(se.begin(), se.end());
//     }
// };

int main()
{
    std::set<char> se;
    // std::set<int> si = {9,2,3,4,5,6,6,6,6,6,6,6};
    const std::string s1 = "teste";
    const std::string s2 = "eettsseezab";
    // se.insert(s1.begin(), s1.end());
    // se.insert(s2.begin(), s2.end());
 
    // for (auto s : se)
    // {
    //     std::cout << s << ' ';
    // }

    std::string result = s1 + s2;

    se.insert(result.begin(), result.end());
    std::cout << std::string(se.begin(), se.end()) << std::endl;
}