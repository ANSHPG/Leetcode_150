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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num1=0, num2=0;

        ListNode* current = l1;
        ListNode* current2 = l2;

        ListNode* result = new ListNode(0);
        ListNode* header = result;

        while(current != nullptr){
            num1 = num1*10 + current -> val;
            current = current -> next;
        }

        while(current2 != nullptr){
            num2 = num2*10 + current2 -> val;
            current2 = current2 -> next;
        }

        int sum = num1 + num2;

        if(sum == 0)
            return new ListNode(0)

        while(sum != 0){
            header -> next = new ListNode(sum%10);
            sum = sum /10;
            header = header -> next;
        }

        return result->next;
    }
};
