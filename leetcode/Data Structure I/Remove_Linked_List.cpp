// 203. Remove Linked List Elements
// Easy
// 6.8K
// 200
// Companies
// Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

// Example 1:

// Input: head = [1,2,6,3,4,5,6], val = 6
// Output: [1,2,3,4,5]
// Example 2:

// Input: head = [], val = 1
// Output: []
// Example 3:

// Input: head = [7,7,7,7], val = 7
// Output: []

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// IDEA CREATE A NEW LIST

class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {

        ListNode *newlist = new ListNode();
        ListNode *newhead = newlist;

        while (head)
        {
            if (head->val != val)
            {
                ListNode *tmp = new ListNode();
                tmp->val = head->val;
                newlist->next = tmp;
                newlist = newlist->next;
            }
            head = head->next;
        }

        return newhead->next;
    }
};

int main()
{
    Solution s;

    // s.removeElements(a)
}