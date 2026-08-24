                int sum = t2->val + carry;

                int digit = sum % 10;
                carry = sum / 10;

                temp->next = new ListNode(digit);
                temp = temp->next;

                t2 = t2->next;
            }

            while (t2 != nullptr) {
                temp->next = new ListNode(digit);
                temp = temp->next;

                t1 = t1->next;
            }

     

                carry = sum / 10;
                int digit = sum % 10;

                int sum = t1->val + carry;
