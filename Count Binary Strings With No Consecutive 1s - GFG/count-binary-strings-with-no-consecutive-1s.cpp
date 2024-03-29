//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++


class Solution {
  public:
    int countStrings(long long int N) {
        // Code here
        long long mat[2][2] = {{1, 1}, {1, 0}}, res[2][2];
        matpow(N+1, mat, res);
        return res[0][0];
    }
    
    void matpow(long long n, long long a[2][2], long long res[2][2]) {
        if(n == 0) {
            res[0][0] = res[1][1] = 1;
            res[1][0] = res[0][1] = 0;
            return;
        }
        long long temp[2][2];
        matpow(n/2, a, temp);
        mul(temp, temp, res);
        if(n&1) {
            copy(temp, res);
            mul(a, temp, res);
        }
    }
    
    void mul(long long a[2][2], long long b[2][2], long long c[2][2]) {
        int mod = 1e9 + 7;
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                c[i][j] = 0;
                for(int k = 0; k < 2; k++) {
                    c[i][j] = (c[i][j] + (a[i][k]*b[k][j]) % mod) % mod;
                }
            }
        }
    }
    
    void copy(long long a[2][2], long long b[2][2]) {
        for(int i = 0; i < 2; i++) for(int j = 0; j < 2; j++) a[i][j] = b[i][j];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int N;
        cin >> N;
        Solution obj;
        cout << obj.countStrings(N) << endl;
    }
}
// } Driver Code Ends