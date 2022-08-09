class Solution {
public:
    
      void helper(vector<int> nums,vector<vector<int>>&res,int s, int n)
    {
        if(s>=n)
        {
           res.push_back(nums);
            return;
        }
            
        
        for(int i=s;i<=n;i++)
        {
            swap(nums[s],nums[i]);
            helper(nums,res,s+1,n);
            swap(nums[s],nums[i]);
         }
      }     
          
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>>res;
        int n=nums.size();
        
        helper(nums,res,0,n-1);
        return res;
    }
    
  
};