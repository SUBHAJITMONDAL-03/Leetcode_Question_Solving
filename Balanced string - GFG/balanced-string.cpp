//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
  public:
    string BalancedString(int n) {
        // code here
        string ans="";
        string temp = "abcdefghijklmnopqrstuvwxyz";
        if(n%2==0){
            while(n>=26){
                ans+=temp;
                n = n-26;
            }
            for(int i=0;i<n/2;i++){
                ans+=char('a'+i);
            }
            for(int i=0;i<n/2;i++){
                ans+=char('a'+ 26 - n/2+i);
            }
        }
        else{
            int sum = 0;
            int temp1 = n;
            while(temp1){
                sum = sum+temp1%10;
                temp1 = temp1/10;
            }
            if(sum%2==0){
                while(n>=26){
                    ans+=temp;
                    n = n-26;
                }
                for(int i=0;i<(n+1)/2;i++){
                    ans+=char('a'+i);
                }
                for(int i=0;i<(n-1)/2;i++){
                    ans+=char('a'+ 26 - (n-1)/2+i);
                }
            }
            else{
                while(n>=26){
                    ans+=temp;
                    n = n-26;
                }
                for(int i=0;i<(n-1)/2;i++){
                    ans+=char('a'+i);
                }
                for(int i=0;i<(n+1)/2;i++){
                    ans+=char('a'+ 26 - (n+1)/2+i);
                }
            }
        }
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends