                list1 = list1->next;
            }
            else {
                temp->next = list2;
                list2 = list2->next;
            }

            temp = temp->next;
        }

     
        if (list1 != nullptr)
            temp->next = list1;
        else
            temp->next = list2;

        return dummy->next;
    }
};
