//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool comp(Job p1, Job p2)
    {
       return (p1.profit > p2.profit) ; 
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        
        int max_d=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            max_d=max(max_d,arr[i].dead);
        }
        
        vector<int>temp(max_d+1,-1);
        
        sort(arr,arr+n,comp);
        
        int c=0,p=0;
        for(int i=0;i<n;i++)
        {
           for(int j=arr[i].dead;j>0;j--)
           {
               if(temp[j]==-1)
               {
                   temp[j]=i;
                   c++;
                   p=p+arr[i].profit;
                   break;
               }
           }
        }
        
        vector<int>res;
        res.push_back(c);
        res.push_back(p);
       
        return res;
        
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends