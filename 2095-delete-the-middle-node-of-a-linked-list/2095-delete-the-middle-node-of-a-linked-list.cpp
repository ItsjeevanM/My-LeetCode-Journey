/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        // If there is only one node, return an empty list.
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        ListNode* dummy = new ListNode(0, head);

        ListNode* slow = dummy;
        ListNode* fast = head;

        // Move slow to the node BEFORE the middle node.
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Remove the middle node.
        slow->next = slow->next->next;
        return dummy->next;
    }
};