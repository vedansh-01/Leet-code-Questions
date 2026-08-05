class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* dummyNode = new ListNode(-1);
        ListNode* curr = dummyNode;
        
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr) {
            
            int sum = carry;

            if (l1 != nullptr) {
                sum += l1->val;
            }

            if (l2 != nullptr) {
                sum += l2->val;
            }

            ListNode* newNode = new ListNode(sum % 10);
            
            carry = sum / 10;

            curr->next = newNode;
            curr = curr->next;

            if (l1 != nullptr) {
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                l2 = l2->next;
            }
        }

        if (carry != 0) {
            curr->next = new ListNode(carry);
        }

        return dummyNode->next;
    }
};