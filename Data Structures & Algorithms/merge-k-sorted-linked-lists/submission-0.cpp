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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>nodes;
        for(auto lst:lists){
            while(lst){
                nodes.push_back(lst->val);
                lst=lst->next;
            }
        }
        sort(nodes.begin(),nodes.end());
        ListNode* res=new ListNode(0);
        ListNode* cur=res;
        for(int n:nodes){
            cur->next=new ListNode(n);
            cur=cur->next;
        }
        return res->next;
    }
};
