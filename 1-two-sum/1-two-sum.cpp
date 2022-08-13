class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> mp;
        int n=nums.size();
         vector<int> res; 
        for(int i=0;i<n;i++)
        {
            
            if(mp.find(target-nums[i])!=mp.end())
            {
               res.push_back(mp[target-nums[i]]);
               res.push_back(i);
               return res;
            }
            else
            {
                mp[nums[i]]=i;
            }
        }
        return res;
        
    }
};