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
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr){
            return head;
        }
        ListNode* temp=head;
        int cnt=0;
        while(temp!=nullptr){
            cnt++;
            temp=temp->next;
        }
        if (cnt == 1 && n == 1) {
            return nullptr;
        }
        if (n == cnt) {
    return head->next;
}
        ListNode* temp1=head;
        int pos=cnt-n-1;
        while(pos){
            temp1=temp1->next;
            pos--;
        }
        temp1->next=temp1->next->next;
        return head;
    }
};
