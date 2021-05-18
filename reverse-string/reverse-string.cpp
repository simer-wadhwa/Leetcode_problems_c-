class Solution {
public:
    void reverseString(vector<char>& s) {
        //Metho-1 Swapping
        /*char temp;
        int j=0,k=s.size()-1,i=0;
        vector<char>::iterator ptr;
        for(int n=0;n<=(s.size()-1)/2;n++)
        {
            //cout<<"k="<<s[k]<<endl;
            //cout<<"j="<<s[j]<<endl;
            temp=s[k];
            s[k]=s[j];
            s[j]=temp;
            j++;
            k--;
        }
        for(ptr = s.begin(); ptr < s.end(); ptr++)
        {
           cout<<s[i++]<<",";
        }
        swapping in better way
        int start=0,end=s.size();
        while(start>end)
        {
        swap(A[start],A[end]);//swap inbuilt function
        start++;
        end--;
        }*/
        //Method-2 Reverse function
        //reverse(s.begin(),s.end())
        //Method-3 stack
        stack<char>t;
        for(int i=0;i<s.size();i++)
            t.push(s[i]);
        for(int i=0;i<s.size();i++)
        {
          s[i]=t.top();
            t.pop();
        }
            
        
            
        
        
    }
};