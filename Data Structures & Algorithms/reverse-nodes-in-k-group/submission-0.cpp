
class Solution {
public:
    ListNode* reverse(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* newhead=reverse(head->next);
        head->next->next=head;
        head->next=nullptr;
        return newhead;
    }
    ListNode* kthnode(ListNode* temp, int k){
        k-=1;
        while(temp!=NULL && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            ListNode* k_node=kthnode(temp,k);
            if(k_node==NULL){
                if(prev)prev->next=temp;
                break;
            }
            ListNode* newnode=k_node->next;
            k_node->next=NULL;
            reverse(temp);
            if(temp==head){
                head=k_node;
            }
            else{
                prev->next=k_node;
                
            }
            prev=temp;
            temp=newnode;

        }         
        return head;
    }
};