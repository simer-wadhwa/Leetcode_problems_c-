class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int i=0,j=0,ans=0;
        unordered_map<char,int>m;
        
        while(j<s.length())
        {
            m[s[j]]++;
            if(m[s[j]]==1)
            {
                ans=max(ans,j-i+1);
                j++;
            }
            else if(m[s[j]]>1)
            {
                while(m[s[j]]>1)
                {
                    m[s[i]]--;
                    i++;
                }
                j++;
            }
                
        }
        return ans;
            
        
    }
};