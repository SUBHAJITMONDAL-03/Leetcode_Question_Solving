//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    /*string reverseWords(string S) 
    { 
        // code here 
        string hep="";
        string ans="";
        reverse(S.begin(),S.end());
        
        for(int i=0;i<S.size();i++){
            
            if(S[i]=='.'){
                
                reverse(hep.begin(),hep.end());
                hep+=".";
                ans+=hep;
                hep="";
                
                
            }
            else{
                ans+=S[i];
            }
            
        }
        reverse(hep.begin(),hep.end());
        ans+=hep;
        
        return ans;
        
        
        
    } 
};*/
string reverseWords(string s) 
    {         
        string res="", helper="";
        reverse(s.begin(), s.end());
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='.')
            {
                reverse(helper.begin(), helper.end());
                helper+=".";
                res+=helper;
                helper="";
            }
            else
            helper+=s[i];
        }
        
        reverse(helper.begin(), helper.end());
        res+=helper;
        
        return res;
    }
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends