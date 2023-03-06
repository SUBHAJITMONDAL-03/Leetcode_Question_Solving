//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// User function Template for C++

class Solution {

  public:
    int noConseBits(int n) {
        // code here
        if(n==0 || n==1){
            return n;
        }
        vector<int>bn;
        //int i=0;
        while(n>0){
          bn.push_back(n%2);
          n=n/2;
        }
        reverse(bn.begin(),bn.end());
        int count=0;
        int i=0;
        while(i<bn.size()-2){
            if(bn[i]==1 && bn[i+1]==1 && bn[i+2]==1){
                bn[i+2]=0;
            }
            i++;
        }
        
        int base=1;
        int dec_value=0;
        int len = bn.size();
        for (int i=len-1; i>=0;i--) {
        if (bn[i]==1)
            dec_value += base;
            base = base * 2;
    }
    return dec_value;
    }
};


//{ Driver Code Starts.

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        int ans = sol.noConseBits(n);
        cout << ans << '\n';
    }

    return 0;
}

// } Driver Code Ends