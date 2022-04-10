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
        int carry=0;
        ListNode*add= new ListNode();
        ListNode* prev=add;
        int flag=0;
        while(l1!=NULL or l2!=NULL)
        {
            int sum=0;
            if(l1!=NULL)
            {
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum=sum+l2->val;
                l2=l2->next;
            }
            int val=0;
            if(l1!=NULL or l2!=NULL){
            sum=sum+carry;
            carry=sum/10;
             val=sum%10;
            ListNode*node= new ListNode(val);
            prev->next= node;  
            prev=prev->next;
            }
            else if(l1==NULL and l2==NULL){
            sum=sum+carry;
            carry=sum/10;
            val=sum%10;
            flag=1;
            ListNode*node= new ListNode(val);
            prev->next= node;  
            prev=prev->next;
            }   
        }
        if(flag==1 and carry>0 )
        {
            ListNode*node= new ListNode(carry);
            prev->next= node; 
            prev=prev->next;
        } 
        prev->next=NULL;
        add=add->next;
        return add;
          }
};