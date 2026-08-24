/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
    ListNode* curr = head;
    ListNode* prev = head;

    unordered_set<ListNode*> visited;
    while (curr != nullptr) {

    if (visited.find(curr) != visited.end()) {
        // This node was already visited
