 #include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
      int st=0,e=s.length()-1;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

        while(st<=e)
        {
            if(isalnum(s[st]) && isalnum(s[e]))
            {
                
                if(s[st]!=s[e])
                    return 0;
                else
                {
                  st++;
                  e--;
                }  
            }
            else
            {
                if(!(isalnum(s[st])))
                    st++;
                else
                    e--;
            }
                
        }
        return 1;
        
    }
};