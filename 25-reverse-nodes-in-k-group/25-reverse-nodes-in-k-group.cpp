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
    int length(ListNode*  A)
    {
        int c=0;
        while(A!=NULL)
        {
            c++;
            A=A->next;
            
        }
        return c;
    }
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        int len=length(head);
        int t=k-1;
        ListNode* A=new ListNode ;
        A->next=head;
        ListNode* prev=A;
        ListNode* curr;
        ListNode* nex;
            while(k<=len)
            {
                curr=prev->next;
                nex=curr->next;
                for(int i=1;i<k;i++)
                {
            curr->next=nex->next;
            nex->next =prev->next;
            prev->next=nex;
            nex=curr->next;
                 
                   
                }
                
                prev=curr;
                len=len-k;
               
                
            }
        
        return A->next;
        
    }
};