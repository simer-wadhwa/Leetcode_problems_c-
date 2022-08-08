class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        unordered_map<char,int>mp;
        
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        
        for(int i=0;i<t.size();i++)
            if(mp.find(t[i])!=mp.end())
               mp[t[i]]-=1;
            else
               return false;
      
        for(int i=0;i<s.size();i++) 
          if(mp[s[i]]!=0)
              return false;
      
        return true;
        
        
    }
};