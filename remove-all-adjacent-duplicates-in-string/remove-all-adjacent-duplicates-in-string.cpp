#include <stack>
class Solution {
public:
    string removeDuplicates(string s) { 
        stack<char> stack;
        
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
        return str;
   }
};