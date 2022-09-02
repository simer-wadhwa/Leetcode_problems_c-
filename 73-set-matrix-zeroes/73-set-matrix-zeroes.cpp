class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        
       int r=matrix.size();
        int c=matrix[0].size();
        
        bool f_row=false,f_col=false;
        
        for(int i=0;i<r;i++)
        {
          if(matrix[i][0]==0)
            {
               f_col=true;
                break;

            }
           
        }
           
        for(int i=0;i<c;i++)
        {
          if(matrix[0][i]==0)
               {
               f_row=true;
                break;
               }   
        }
           
        
        for(int i=1;i<r;i++)
        {
            for(int j=1;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        
        
    for(int i=1;i<r;i++)
        {
            for(int j=1;j<c;j++)
            {
                if(matrix[i][0]==0 ||matrix[0][j]==0)
                {
                    
                    matrix[i][j]=0;
                }
            }
        }
        
    if(f_row)
    {
         for(int i=0;i<c;i++)
            matrix[0][i]=0;
    }
       
        
    if(f_col)
    {
        for(int i=0;i<r;i++)
            matrix[i][0]=0;
    }
        
        
        
        
    }
};