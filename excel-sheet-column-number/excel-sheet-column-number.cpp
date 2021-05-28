class Solution {
public:
    int titleToNumber(string columnTitle) 
    {
        map<char, int>  mp;
        //map<char, int>::iterator it ;
        int result=0,size=columnTitle.size(),temp;
        char a='A';
        
        for(int i=1;i<=26;i++)
        {
            mp[a]=i;
            a++;
        }
        if(size==1)
            return mp[columnTitle[0]];
        else
        {
           temp=size-1;
            //cout<<temp;
            for(int j=0;j<size;j++)
            {
                result+=pow(26,temp)*mp[columnTitle[j]];
                temp--;
            }
                
        }
      return result;
    }
};