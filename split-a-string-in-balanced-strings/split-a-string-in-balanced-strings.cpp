class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        int r=0,l=0;
        //stack<char>stack;
        for(int i=0;i<s.size();i++)
        {
            
           if(s[i]=='R')
           r++;
           else
            l++;
            
            if(r==l)
            {
             count++;
                l=0;
                r=0;
            }
                
               
        }
       return count; 
        
    }
};