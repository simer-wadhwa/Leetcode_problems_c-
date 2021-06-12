class Solution {
public:
    string restoreString(string s, vector<int>& indices) 
    {
        string str=s;
        for(int i=0;i<s.size();i++)
        {
            int a=indices[i];
            //cout<<a;
            str[a]=s[i];
        }
       return str; 
    }
};