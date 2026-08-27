        while (temp != nullptr) {
            st.insert(temp);
            temp = temp->next;
        }

     
        temp = headB;

        while (temp != nullptr) {
            if (st.find(temp) != st.end()) {
                return temp;  
            }

            temp = temp->next;

        ListNode* temp = headA;
     

        unordered_set<ListNode*> st;

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
public:
class Solution {
