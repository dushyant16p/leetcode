class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode* temp = head;
        vector<int> store;

        while(temp != NULL){
            store.push_back(temp->val);
            temp = temp->next;
        }

        int i = 0;
        ListNode* remp = head;

        while(i < store.size()/2){
            remp = remp->next;
            i++;
        }

        return remp;
    }
};