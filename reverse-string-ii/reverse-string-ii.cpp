class Solution {
public:
    string reverseStr(string str, int k)
    {
        int s=0;
        int e;
       for(int i=0;i<str.length()-1;i+=2*k)
       {
           s=i;
           e= min(s+k-1, (int)str.length()-1);
           //cout<<s<<" "<<e;
           while(s<e)
           {
               swap(str[s],str[e]);
               s++;
               e--;
           }
           
       }
       return str; 
    }
};