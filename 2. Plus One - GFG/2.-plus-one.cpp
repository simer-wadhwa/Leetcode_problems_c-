// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) 
    {
      vector<int> ans;
      int carry=0,sum=0;
      sum=arr[N-1]+1;
      carry=sum/10;
      sum=sum%10;
      ans.push_back(sum);
      for(int i=N-2;i>=0;i--)
      {
         // cout<<"arr="<<arr[i]<<endl;
          //cout<<"s="<<sum<<endl;
          
          //<<"c="<<carry<<endl;
          sum=arr[i]+carry;
          carry=sum/10;
          sum=sum%10;
         ans.push_back(sum); 
      }
      if(carry)
      ans.push_back(carry); 
        // code here
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends