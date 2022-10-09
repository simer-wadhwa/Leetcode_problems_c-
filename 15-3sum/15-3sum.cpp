class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) 
    {
         vector<vector<int>> res;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        { 
            if (i==0|| i > 0 && arr[i] != arr[i-1]) 
            {          
            int j=i+1;
            int k=arr.size()-1;
            
            while(j<k)
            {
                int sum=arr[i]+arr[j]+arr[k];
                
                if(sum==0)
                {
                 vector<int>temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    
                    res.push_back(temp);
                   
                    
                     while (j < k && arr[j] == arr[j+1]) j++;
                        while (j < k && arr[k] == arr[k-1]) k--;
                    
                     j++;k--;
                }
                if(sum>0)
                    k--;
                if(sum<0)
                    j++;
            }
            }
            
            
        }
        return res;
        
    }
};