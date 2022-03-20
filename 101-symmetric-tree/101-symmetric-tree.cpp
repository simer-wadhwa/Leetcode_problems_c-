/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool Symmetrich(TreeNode* T1,TreeNode* T2)
    {
        if(T1==NULL && T2==NULL)
            return true;
        if(T1==NULL && T2!=NULL)
            return false;
        if(T1!=NULL && T2==NULL)
            return false;
        if(T1->val!=T2->val)
            return false;
       return(Symmetrich( T1->left, T2->right) && Symmetrich( T1->right, T2->left));
        
    }
    bool isSymmetric(TreeNode* root) 
    {
        if(root==NULL)
            return true;
        TreeNode* T1;
        TreeNode* T2;
        T1=root->left;
        T2=root->right;
    bool ans=Symmetrich(T1,T2); 
        return ans;
    }
};