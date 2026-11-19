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
    void reorderList(ListNode* head) {
        stack<ListNode*> st;
        ListNode* curr=head;
        while(curr){
            st.push(curr);
            curr=curr->next;
        }

        curr=head;
        const int halfsize=st.size()/2;
        for(int i=0;i<halfsize;i++){
            ListNode *stacknode=st.top();
            st.pop();
            stacknode->next=curr->next;
            curr->next=stacknode;
            curr=curr->next->next;
        }
        curr->next=nullptr;

        return;
    }
};
