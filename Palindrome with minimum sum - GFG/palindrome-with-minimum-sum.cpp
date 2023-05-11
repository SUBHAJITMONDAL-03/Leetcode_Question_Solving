//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// User function Template for C++

class Solution {
  public:
    int minimumSum(string s) {
        int n=s.size();
        for(int i=0;i<n/2;i++){
            if(s[i]!='?'&& s[n-i-1]!='?' && s[i]!=s[n-i-1])return -1;   
        }
        if(s[0]=='?' && s[s.size()-1]=='?'){
            int i=0;
            while(s[i]==s[n-i-1] && i<n/2){
                if(s[i]!='?')break;
                i++;
            }
            if(i==n/2)return 0;
            char c=s[i]!='?'?s[i]:s[n-i-1];
            for(int j=0;j<=i;j++){
                s[j]=s[n-j-1]=c;
            }
            for(int j=i;j<n/2;j++){
                if(s[j]=='?' && s[n-j-1]=='?'){
                    s[j]=s[n-j-1]=s[j-1];
                }
                else{
                    c=s[j]!='?'?s[j]:s[n-j-1];
                    s[j]=s[n-j-1]=c;
                }
            }
        }
        else{
            char c=s[0]!='?'?s[0]:s[n-1];
            s[n-1]=s[0]=c;
            for(int i=1;i<n/2;i++){
                if(s[i]=='?' && s[n-i-1]=='?'){
                    s[i]=s[n-i-1]=s[i-1];
                }
                else{
                    c=s[i]!='?'?s[i]:s[n-i-1];
                    s[i]=s[n-i-1]=c;
                }
            }
        }
        int cnt=0;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1])cnt+=abs(s[i]-s[i-1]);
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends