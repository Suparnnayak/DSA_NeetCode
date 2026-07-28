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
    void copylist(Node* head){
        Node* temp=head;
        while(temp){
            Node* nextnode=temp->next;
            Node* copy=new Node(temp->val);
            copy->next=nextnode;
            temp->next=copy;
            temp=nextnode;
        }
    }
    void randomlink(Node* head){
        Node* temp=head;
        while(temp){
            Node* copy=temp->next;
            if(temp->random)copy->random=temp->random->next;
            else copy->random=nullptr;
            temp=temp->next->next;
        }
    }
    Node* getnext(Node* head){
        Node* dup=new Node(-1);
        Node* res=dup;
        Node* temp=head;
        while(temp){
            res->next=temp->next;
            temp->next=temp->next->next;
            res=res->next;
            temp=temp->next;
        }
        return dup->next;
    }
    Node* copyRandomList(Node* head) {
    if(head == nullptr) return nullptr;
       copylist( head);
       randomlink( head);
       return getnext( head);
    }
};
