class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
            return {-1, -1};

        ListNode* temp = head;

        int counting = 1;
        vector<int> nodes;

        int prev = head->val;

        temp = temp->next;

        while (temp->next != nullptr) {

            counting++;

            int after = temp->next->val;

       
