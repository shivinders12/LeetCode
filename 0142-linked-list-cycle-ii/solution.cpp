    unordered_set<ListNode*> visited;
    while (curr != nullptr) {

    if (visited.find(curr) != visited.end()) {
        // This node was already visited
        return curr;
    }

        visited.insert(curr);
        
        curr = curr->next;
    }

    ListNode* prev = head;
    ListNode* curr = head;
public:
    ListNode *detectCycle(ListNode *head) {

    return nullptr;

