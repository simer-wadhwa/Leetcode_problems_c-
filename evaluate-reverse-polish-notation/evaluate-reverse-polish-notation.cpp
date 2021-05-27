#include <stack>
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int n=tokens.size();
       // int x,y,ans;
        //s.push(stoi(tokens[0]));
        //s.push(stoi(tokens[1]));
        for(int i=0;i<n;i++)
        {
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="/"||tokens[i]=="*")
            {
               int x=s.top();
                s.pop();
               int y=s.top();
                s.pop();
                if(tokens[i]=="+")
                    s.push(y + x);
               
               else if(tokens[i]=="-")
                    s.push(y - x);
               
               else if(tokens[i]=="*")
                    s.push(y * x);
                
               else if(tokens[i]=="/")
                    s.push(y / x);
                
                //s.push(ans);
            }
            else
                s.push(atoi(tokens[i].c_str()));
        }
        
        return s.top();
    }
};