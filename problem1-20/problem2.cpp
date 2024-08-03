
//ListNode definition
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {

    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            int carry = 0, sum;
            ListNode *newHead = nullptr,  *last = nullptr;
            while(l1 || l2) {
                sum = carry;
                if(l1){
                    sum += l1->val;
                    l1 = l1->next;
                }
                if(l2){
                    sum += l2->val;
                    l2 = l2->next;
                }
                //Set the carry for next iteration if any
                carry = sum/10;
                //Get the numerber of units in the sum
                sum %= 10;
                ListNode* aux = new ListNode(sum);
                if(!newHead) {
                    newHead = aux;
                    newHead->next = last;
                } else {
                    last->next = aux; 
                }
                last = aux;
            }
            //Create a node for the carry 
            if(carry > 0) {
                last->next = new ListNode(carry);
                last = last->next; 
            }
            return newHead;
        }

};
