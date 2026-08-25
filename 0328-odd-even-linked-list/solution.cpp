
        if(head == nullptr || head->next==nullptr) return head;
        ListNode* Odd=head;
        ListNode* Even=head->next;
        ListNode* n1=Odd;
        ListNode* n2=Even;

        while (n2 != nullptr && n2->next != nullptr)
        {
            ListNode* o=n1->next->next;
            ListNode* e=n2->next->next;
            n1->next=o;
            n2->next=e;
public:
    ListNode* oddEvenList(ListNode* head) {
class Solution {
 * };
 */
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode *next;
 *     int val;
 * struct ListNode {
