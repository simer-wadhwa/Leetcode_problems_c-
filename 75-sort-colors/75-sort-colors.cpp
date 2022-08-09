class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int mid=0,high=nums.size()-1,start=0;
        
        while(mid<=high)
        {
            switch(nums[mid])
            {
                    
            
                
         case 0:
            {
              swap(nums[start],nums[mid]);
                start++;
                mid++;
                break;
                
            }
        case 1:
            {
                mid++;
                break;
            }
           
        case 2:
            {
               swap(nums[mid],nums[high]);
                high--;
                break;
            }
            
            } 
        }
        
        
    }
};