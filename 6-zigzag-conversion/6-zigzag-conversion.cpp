class Solution {
public:
    string convert(string s, int numRows) 
    {
        if(numRows<=1)
            return s;
        int n=s.size();
        string *A=new string[numRows];
        int row=0;
        int step=1;
        for(int i=0;i<n;i++)
        {
            A[row].push_back(s[i]);
          if(row==0)
              step=1;
            else if(row==numRows-1)
                step=-1;
            row=row+step;
              
        }
       string ans="";
        for(int i=0;i<numRows;i++)
        {
            ans=ans+A[i];
        }
        return ans;
    }
};