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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head)
        {
            ListNode *start=head;
            while(start&&start->next)
            {
                ListNode *temp=start->next;
                while(temp)
                {
                    start->next=temp;
                    if(temp->val!=start->val)
                    {
                        start=temp;
                        break;
                    }
                     temp=temp->next;
                }
                if(!temp) start->next=NULL,start=NULL;
            }
        }
        return head;
    }
};
