class Solution {
public:
    int bitwiseComplement(int n) 
    {
        int m=n;
        int ans=0;
        int mask=0;
        if(m==0)
            return 1;
       while(m!=0)
       {
           mask= (mask << 1) | 1;
           m=m>>1;
       }
        ans=(~n) & mask;
        return ans;
    }
};