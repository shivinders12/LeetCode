            return head;

        
        temp->next = head;

        
        ListNode* t2 = head;

        for (int i = 0; i < node - k - 1; i++) {
            t2 = t2->next;
        }

       
        ListNode* newHead = t2->next;

      
        t2->next = nullptr;

        return newHead;
    }
};
