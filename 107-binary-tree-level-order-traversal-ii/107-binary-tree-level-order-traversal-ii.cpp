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
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
       vector<vector<int>> ans;
        if(root == NULL)
            return ans;
        
        vector<int> temp;
        queue<TreeNode*> q;
        stack<vector<int>> s;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode* f=q.front();
            q.pop();
            if(f==NULL)
            {
                cout<<endl;
                s.push(temp);
                temp.clear();
                
              if(!q.empty())
                  q.push(NULL);
            }
            else
            {
                temp.push_back(f->val);
               
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
                
            }
        }
        //reverse(ans.begin(),ans.end());
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};