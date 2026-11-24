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
    bool hasCycle(ListNode *head) {
        
        if (head == nullptr || head->next == nullptr) {
            return false;
        }
        ListNode* slow = head; //both points to head in the beginning
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;         //1 step 
            fast = fast->next->next;    // 2 step
            if (slow == fast) {
                return true;            // if cycle present
            }

        }
        return false;   //in no cycle or both fast& fast->next is nullptr

    }

};