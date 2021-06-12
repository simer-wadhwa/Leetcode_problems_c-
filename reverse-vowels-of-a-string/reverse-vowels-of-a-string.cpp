class Solution
{
public:
    bool isVowel(char c)
{
    return (c=='a' || c=='A' || c=='e' ||
            c=='E' || c=='i' || c=='I' ||
            c=='o' || c=='O' || c=='u' ||
            c=='U');
}
    string reverseVowels(string str)
    {
        int s=0;
        int e=str.size()-1;
        while(s<e)
        {
            if(isVowel(str[s]) && isVowel(str[e]))
               {
                   swap(str[s],str[e]);
                   s++;
                   e--;
               }
               else if(isVowel(str[s]))
               e--;
               else
               s++;
    }
               return str;
        
    }
};