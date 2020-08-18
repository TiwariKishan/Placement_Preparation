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

// With T.C=O(N+M) ans S.C=O(N+M)
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *l3=NULL;
        ListNode **node=&l3;
        while(l1||l2)
        {
            if(l1&&!l2)
            {
                *node=l1;
                break;
            }
            else if(!l1&&l2)
            {
                 *node=l2;
                break;
            }
            else
            {
                if(l1->val<l2->val)
                {
                    *node= new ListNode(l1->val);
                    l1=l1->next;

                }
                else
                {
                    *node= new ListNode(l2->val);
                    l2=l2->next;

                }
                node=&((*node)->next);
            }
        }
        return l3;
    }
};

// With T.C=O(N+M) ans S.C=O(1)
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        if(l1->val<l2->val)
        {   l1->next=mergeTwoLists(l1->next,l2);
            return l1;}
        else
        {   l2->next=mergeTwoLists(l1,l2->next);
            return l2;}

    }
};
