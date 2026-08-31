
       while(temp->next!=nullptr)
       {
        temp= temp->next;
        node++;
       }
       temp->next=head;
       ListNode* t2=head;
       ListNode* t3=head->next;
       
        k = k % node;
        if (k == 0)
            return head;
       for(int i=0;i<(node-k)-1;i++)
       {
        t2=t2->next;
        t3=t3->next;

       }
       t2->next=nullptr;
       int node=1;
       ListNode* temp=head;
        
    ListNode* rotateRight(ListNode* head, int k) {
public:
