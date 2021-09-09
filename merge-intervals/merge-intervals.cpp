class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>>res;
        sort(intervals.begin(),intervals.end());
        int i=0,n=intervals.size(),s=-1,e=-1;
        
        
        while(i<n)
        {
            if(s==-1)
            {
                s=intervals[i][0];
                e=intervals[i][1];
                i++;
            }
            else
            {
                if(e>=intervals[i][0])
                {
                     e=max(e,intervals[i][1]);
                    //res.push_back(vector<int>{s,e});
                    i++;
                }
                
            else
            {
                res.push_back(vector<int>{s,e});
                s=intervals[i][0];
                e=intervals[i][1];
                i++;
            }
                
            }
            } 
          if(s!=-1){
        res.push_back(vector<int>{s, e});
        }
       return res; 
    }
};