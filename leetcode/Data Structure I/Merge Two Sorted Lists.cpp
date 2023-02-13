// 21. Merge Two Sorted Lists
// Easy
// 17.1K
// 1.6K
// Companies
// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.

// Example 1:

// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]
// Example 2:

// Input: list1 = [], list2 = []
// Output: []
// Example 3:

// Input: list1 = [], list2 = [0]
// Output: [0]

#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// class Solution
// {
// public:
//     ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
//     {
//         if(!list1) return list2;
//         if(!list2) return list1;

//         if (list2->val < list1->val)
//         {
//             ListNode *tmp = list1;
//             list1 = list2;
//             list2 = tmp;
//         }

//         ListNode *head = list1;

//         while (head && list2)
//         {
//             if(!head->next){
//                 head->next = list2;
//                 return list1;
//             }
//             if (head->next->val >= list2->val)
//             {
//                 ListNode *tmp = head->next;
//                 ListNode *tmp2 = list2->next;
//                 head->next = list2;
//                 list2->next = tmp;
//                 list2 = tmp2;
//             }
//             head = head->next;
//         }

//         return list1;
//     };
// };

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *head = new ListNode();
        ListNode *curr = head;

        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val <= list2->val)
            {
                curr->next = list1;
                list1 = list1->next;
            }
            else
            {
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }

        if (list1 != NULL)
            curr->next = list1;
        if (list2 != NULL)
            curr->next = list2;
        return head->next;
    };
};

int main()
{
    ListNode *list1 = new ListNode(1);
    list1->next = new ListNode(2);
    // list1->next->next = new ListNode(4);

    ListNode *list2 = new ListNode(1);
    list2->next = new ListNode(2);
    // list2->next->next = new ListNode(4);

    Solution s;

    list1 = s.mergeTwoLists(list1, list2);

    return 0;
}