#include <stack>
class Solution {
public:
    string removeDuplicates(string s) { 
        /*stack<char> stack;
        
        for(int i=0;i<s.size();i++)
        {
            if(stack.empty() || s[i]!=stack.top())
                stack.push(s[i]);
           
            else
                stack.pop();
         }
        string str="";
        while(!stack.empty())
        {
            //cout<<"in"<<endl;
           //str[j]=stack.top();
            str.push_back(stack.top());
            
            stack.pop();
           
        }
        //cout<<str;
        reverse(str.begin(),str.end());
        return str;*/
        
        int sp=-1;
        for(int i=0;i<s.size();i++)
        {
            if(sp==-1 || s[sp]!=s[i])
            {
                 sp++;
                s[sp]=s[i];
               
            }
            else
                sp--;
        }
        string ans="";
        for(int i=0;i<=sp;i++)
        {
            ans.push_back(s[i]);
        }
        return ans;
   }
};