// 141. Linked List Cycle
// Easy
// 11.3K
// 971
// Companies
// Given head, the head of a linked list, determine if the linked list has a cycle in it.

// There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

// Return true if there is a cycle in the linked list. Otherwise, return false.

// Example 1:

// Input: head = [3,2,0,-4], pos = 1
// Output: true
// Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
// Example 2:

// Input: head = [1,2], pos = 0
// Output: true
// Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.
// Example 3:

// Input: head = [1], pos = -1
// Output: false
// Explanation: There is no cycle in the linked list.

#include <unordered_map>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// class Solution
// {
// public:
//     bool hasCycle(ListNode *head)
//     {
//         std::unordered_map<ListNode *, bool> m;

//         while (head)
//         {
//             if (m[head])
//                 return true;

//             m[head] = true;

//             head = head->next;
//         }

//         return false;
//     }
// };

// FAST and SLOW algorithm
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;

        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) return true;
        }

        return false;
    }
};

int main()
{
    ListNode *a = new ListNode(10);
    ListNode *b = new ListNode(10);

    a->next = b;
    b->next = a;

    Solution s;

    s.hasCycle(a);

    return 0;
}