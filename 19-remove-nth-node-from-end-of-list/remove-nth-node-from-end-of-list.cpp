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

        int count=0;
        ListNode*temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;

        }

        if(count==n){
           ListNode*head_del=head;
           head=head->next;
           delete(head_del);
           return head;

        }

        ListNode*i=head;
        ListNode*j=head;
        int pos=count-n;
        while(pos!=0){
            i=j;
            j=j->next;
            pos--;
        }
        i->next=j->next;
        delete(j);
        return head;
    }
};