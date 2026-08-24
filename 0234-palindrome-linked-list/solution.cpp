        }
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

        ListNode* slow = head;
        ListNode* fast = head;
            return true;


        if (head == nullptr || head->next == nullptr)

        ListNode* temp = head;
    bool isPalindrome(ListNode* head) {

        ListNode* prev = nullptr;
        ListNode* curr = slow;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
