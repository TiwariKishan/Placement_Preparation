/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    map<Node*,Node*> m;
    Node* copyRandomList(Node* head) {
        if(!head)
        return head;
        if(m.find(head)!=m.end()) return m[head];
        Node *curr=new Node(head->val);
        m[head]=curr;
        m[head]->next=copyRandomList(head->next);
        m[head]->random=copyRandomList(head->random);
        return m[head];
        }
};
