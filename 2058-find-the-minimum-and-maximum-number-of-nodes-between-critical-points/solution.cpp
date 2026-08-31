            }
                nodes.push_back(counting);

           
            if (temp->val < prev && temp->val < after) {
                nodes.push_back(counting);
            }

            prev = temp->val;
            temp = temp->next;
        }

     
        if (nodes.size() < 2)
            return {-1, -1};

        int minDistance = INT_MAX;

       
        for (int i = 1; i < nodes.size(); i++) {
            minDistance = min(minDistance, nodes[i] - nodes[i - 1]);
        }

     
