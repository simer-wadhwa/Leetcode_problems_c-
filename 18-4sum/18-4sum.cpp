class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        
        vector<vector<int>>res;
        
        if(nums.empty())
            return res;
        
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            //int t1=target-nums[i];
            
            for(int j=i+1;j<n;j++)
            {
                //int t2=t1-nums[j];
                long iplusj = (long)nums[i]+(long)nums[j];
                long long sum = target - iplusj ;
                
                int f=j+1,b=n-1;
                
                while(f<b)
                {
                  
                    
                    if(nums[f] + nums[b]>sum)
                        b--;
                    else if(nums[f] + nums[b]<sum)
                        f++;
                    else
                    {
                        vector<int> temp(4,0);
                         temp[0]=nums[i];
                         temp[1]=nums[j];
                         temp[2]=nums[f];
                         temp[3]=nums[b];
                        
                        res.push_back(temp);
                    
                    while(f<b && nums[f]==temp[2])
                        f++;
                    
                     while(f<b && nums[b]==temp[3])
                        b--;
                        
                    }     
                }
                
                 while(j+1<n && nums[j]==nums[j+1])
                        j++;
            }
             while(i+1<n && nums[i]==nums[i+1])
                        i++;
        }
        return res;
        
    }
};