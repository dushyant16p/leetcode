#include <set>

class Solution {
public:
    bool hasCycle(ListNode *head) {

        set<ListNode*>s;

        ListNode*temp=head;

        while(temp!=NULL){
            if(s.count(temp) == 1){
                return true;
            }

            s.insert(temp);
            temp = temp->next;
        }

        return false;
    }
};