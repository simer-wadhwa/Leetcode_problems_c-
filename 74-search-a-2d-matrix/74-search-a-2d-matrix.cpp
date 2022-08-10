class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int r=matrix.size()-1;
        int c =matrix[0].size()-1;
        
        if(target < matrix[0][0] || target > matrix[r][c])
            return false;
        int i=0;
        
        while(i<=r && c>=0)
        {
            if(target==matrix[i][c])
                return true;
           else if(target>matrix[i][c])
               i++;
            else
                c--;
        }
        
        return false;
        
    }
};