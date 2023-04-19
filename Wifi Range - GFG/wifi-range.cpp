//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
     int one=0,zero=0;
        for(int i=0;i<N;i++){
            if(S[i]=='0'){
                if(one) one--;
                else zero++;
            }
            else{
                if(zero>X) return false;
                else{
                    zero=0;
                    one=0;
                    one+=X;
                }
            }
        }
        if(zero) return false;
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends