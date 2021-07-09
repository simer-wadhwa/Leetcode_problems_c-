class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==0)
            return "";
        
        string m = *min_element(strs.begin(),strs.end());
        int s=m.size();
        string out="";
    
        for(int i=0;i<s;i++)
        {
          for(int j=0; j<strs.size() ; j++) 
          {
               cout<<"m="<<m[i]<<" s= "<<strs[j][i];
            if(m[i]!=strs[j][i])
                
                return out;
            
                
          }
             
         out.push_back(m[i]);       
        }
        
        return out;
    }
};