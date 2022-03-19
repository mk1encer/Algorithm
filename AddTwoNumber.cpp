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
        ListNode* head=nullptr;
        ListNode* current=nullptr;
        bool flow=false;
        
        while(l1 || l2){
            int one, two;
            if(!l1) one=0;
            else one=l1->val;
            
            if(!l2) two=0;
            else two=l2->val;
            
            
            int sum=one+two;
            if(flow) {
                ++sum;
                flow=false;
            }

            ListNode* temp=new ListNode(sum%10);
            if(sum>=10) flow=true;
            
            if(!head){
                head=temp;
            }
            else{
                current->next=temp;
            }
            current=temp;
            
            if(l1)
                l1=l1->next;
            if(l2)
                l2=l2->next;
        }
        
        if(flow){
            ListNode* temp=new ListNode(1);
            current->next=temp;
        }
        return head;
    }
};
