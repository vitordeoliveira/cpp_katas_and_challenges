/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         stack<int> s;
//         while(head){
//             s.push(head->val);
//             head = head->next;
//         }

//         head = new ListNode();
//         ListNode *dummy = head;
//         while(!s.empty()){
//             dummy->next = new ListNode(s.top());
//             s.pop();
//             dummy = dummy->next;
//         }

//         return head->next;


//     }
// };

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr=head;
//         while(curr){
//             ListNode* next=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=next;
//         }
//         return prev;
//     }
// };

