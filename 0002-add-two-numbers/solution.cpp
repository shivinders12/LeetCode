            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            temp->next = new ListNode(sum % 10);
            carry = sum / 10;

            temp = temp->next;
        }

        return head->next;
    }
};
