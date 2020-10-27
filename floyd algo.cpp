/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* loop(ListNode *head)
    {
        ListNode *p=head,*q=head;
        while(p&&q&&q->next)
        {
            p=p->next;
            q=q->next->next;
            if(p==q) return p;
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        if(!head) return NULL;
        ListNode *p=loop(head);
        if(!p) return NULL;
        ListNode *q=head;
        while(p!=q)
        {
            p=p->next;
            q=q->next;
        }
        return p;
    }
};
