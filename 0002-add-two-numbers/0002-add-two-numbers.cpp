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
        ListNode* dummyhead = new ListNode(-1);
        ListNode* curr=dummyhead;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry!=NULL){
            int digit1=((l1!=NULL)?l1->val:0);
            int digit2=((l2!=NULL)?l2->val:0);
            int sum=digit1 + digit2 + carry;
            int digit=sum%10;
            carry=sum/10;

            ListNode* newnode=new ListNode(digit);
            curr->next=newnode;
            curr=curr->next;

            l1=((l1!=NULL)?l1->next:0);
            l2=((l2!=NULL)?l2->next:0);
        }
        return dummyhead->next;

        }
    
};