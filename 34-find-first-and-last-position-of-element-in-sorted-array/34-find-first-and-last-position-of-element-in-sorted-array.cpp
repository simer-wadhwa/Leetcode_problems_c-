class Solution {
public:
   int index(vector<int>& nums, int target,int first)
    {
        int s=0,e=nums.size()-1;
        int ans=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                if(first==true)
                    e=mid-1;
                    
                else
                    s=mid+1;
                    
            }
            else if(nums[mid]<target)
                s=mid+1;
            else
                e=mid-1;
                
        }
return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) 
    {
     vector<int> v(2,-1);
     int first=index(nums,target,true);
        if(first==-1)
            return v;
    int second=index(nums,target,false);
        v[0]=first;
        v[1]=second;
        return v;
    }
    
};