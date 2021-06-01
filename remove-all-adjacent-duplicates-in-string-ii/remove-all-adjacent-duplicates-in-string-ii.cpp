class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>stack;
        for(int i=0;i < s.size();i++)
        {
            if(stack.empty()||stack.top().first!=s[i])
            {
                pair p(s[i],1);
                stack.push(p);
            }
            else
            {
                stack.top().second++;
                int count= stack.top().second;
                if(count==k)
                    stack.pop();
            }
        }
        string ans="";
        while(!stack.empty())
        {
            int count = stack.top().second;
            while(count--)
            {
                ans.push_back(stack.top().first);
            }
            stack.pop();
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};