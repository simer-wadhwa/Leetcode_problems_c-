class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,m=INT_MIN,i=0;
        for(int j=0;j<nums.size();j++)
        {
        sum=sum+nums[j];
            m=max(sum,m);
            if(sum<0)
            {
                sum=0;
                i=j+1;
            }
            
            
        }
        return m;
    }
};