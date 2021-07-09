class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++)
        {
          if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/")
          {
              int v1=st.top();
              st.pop();
              int v2=st.top();
              st.pop();
              //int r = a tokens[i] b;
              //stack.push(r);
              if(tokens[i]=="+"){
                st.push(v2+v1);  /// push result inside stack
            } 
            else if(tokens[i]=="-"){
                st.push(v2-v1);  /// push result inside stack
            }
             else if(tokens[i]=="*"){
                st.push(v2*v1);  /// push result inside stack
            }
             else if(tokens[i]=="/"){
                st.push(v2/v1);  /// push result inside stack
            }
              
          }
            else
                st.push(atoi(tokens[i].c_str()));
        }
      return st.top();  
    }
};