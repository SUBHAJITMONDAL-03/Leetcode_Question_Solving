//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
         map<char,int> mp;

        for(auto it : s) mp[it]++;

        int ans = 0;

        int b = mp['b'], a = mp['a'], l = mp['l']/2, o = mp['o']/2, n = mp['n'];

        return min({b,a,l,o,n});
    } 
    
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends