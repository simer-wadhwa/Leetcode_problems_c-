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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        unordered_map<ListNode *, int>mp;
        
        ListNode *A=headA;
        ListNode *B=headB;
        while(A!=NULL)
        {
            mp[A]++;
            A=A->next;
        }
        while(B!=NULL)
        {
            mp[B]++;
            B=B->next;
        }
        A=headA;
       while(A!=NULL)
        {
           if(mp[A]>1)
               return A;
            A=A->next;
        } 
        return NULL;
        
    }
};