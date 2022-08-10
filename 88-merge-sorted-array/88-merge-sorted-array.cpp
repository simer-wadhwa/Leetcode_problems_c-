class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
       int k=n+m-1;
        int i=n-1 ,j=m-1;
        while(i>=0 && j>=0)
        {
            if(nums2[i]>nums1[j])
            {
                nums1[k--]=nums2[i--];
            }
            else 
            {
               
                 nums1[k--]=nums1[j--];
            }
        }
        while(i>=0)
            nums1[k--]=nums2[i--];
    }
};