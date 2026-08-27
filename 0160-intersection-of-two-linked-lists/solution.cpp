
      
        temp = headB;

        while (temp != nullptr) {

            for (int i = 0; i < v.size(); i++) {
                if (temp == v[i]) {
                    return temp;
                }
            }

            temp = temp->next;
        }

        return nullptr;
        
    }
};
        }
