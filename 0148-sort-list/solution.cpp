        // Find middle
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Split into two halves
        ListNode* right = slow->next;
        slow->next = nullptr;

        ListNode* left = head;

        // Sort both halves
        left = sortList(left);
        right = sortList(right);

        // Merge sorted halves
        return merge(left, right);
    }
};
