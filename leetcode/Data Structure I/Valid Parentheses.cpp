// 20. Valid Parentheses
// Easy
// 18.1K
// 1K
// Companies
// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true
// Example 3:

// Input: s = "(]"
// Output: false

// Constraints:

// 1 <= s.length <= 104
// s consists of parentheses only '()[]{}'.

#include <iostream>
#include <stack>

using namespace std;

class Solution
{
private:
    bool isCloseBracket(char a, char b){
        return a == '(' && b == ')' || a == '{' && b == '}' || a == '[' && b == ']';
    }
public:
    bool isValid(string s)
    {

        stack<char> stack;

        for (auto &c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                stack.push(c);
                continue;
            }

            if (c == ')' || c == '}' || c == ']')
            {
                if(stack.empty()) return false;
                
                if(isCloseBracket(stack.top(), c)){
                    stack.pop();
                } else {
                    return false;
                }
            }
        }

        return stack.empty();
    }
};

int main()
{
    Solution s;

    s.isValid("[");
}