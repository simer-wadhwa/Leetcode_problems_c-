
class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int s=0;
        int n=nums.size();
        int e=n-1;
       
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            int next=(mid+1)%n;
            int prev=(mid-1+n)%n;
            if(nums[next]>=nums[mid] && nums[prev]>=nums[mid])
                   return nums[mid];
            if(nums[mid]<=nums[e])
            
                e=mid-1;
                
            else  if(nums[mid]>=nums[s])
                s=mid+1;
        }
        return 0;
        
    }
};