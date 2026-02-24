class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode* temp = head;

        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int mid=count/2;
        
        ListNode*remp=head;

        while(mid!=0){
            remp=remp->next;
            mid--;
        }

        return remp;
        
    }
};