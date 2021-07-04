class Solution {
public:
    int majorityElement(vector<int>& a) {
        int n=a.size();
        int count =0;
        int i=0;
        sort(a.begin(),a.end());
        int mid=n/2;
        
        return a[mid];
        
    }
};