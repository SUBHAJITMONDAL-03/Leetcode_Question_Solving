//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
      unordered_map<string,int> m;
        for(auto x:arr)m[x]++;
        int odd=0;
        for(auto x:m){
            string str = x.first;
            reverse(str.begin(),str.end());
            if(x.first==str){
                if(x.second%2)odd++;
                if(odd>1)return false;
            }
            else{
                if(x.second!=m[str])return false;
            }
        }
        return true;
}
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends