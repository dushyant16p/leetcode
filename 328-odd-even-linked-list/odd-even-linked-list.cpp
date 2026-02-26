class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        if(!head) return head;
        vector<int> v;
        ListNode* temp = head;
        
        while(temp != NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }

        temp = head;

        for(int i = 0; i < v.size(); i += 2){
            temp->val = v[i];
            temp = temp->next;
        }
        for(int i = 1; i < v.size(); i += 2){
            temp->val = v[i];
            temp = temp->next;
        }

        return head;
    }
};