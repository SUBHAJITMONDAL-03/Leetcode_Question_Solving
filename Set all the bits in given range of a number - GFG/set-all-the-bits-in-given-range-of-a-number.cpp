//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setAllRangeBits(int n , int l , int r) {
        // code here
        int m=n;
        for(int i=l;i<=r;i++){
          //if(y&(1<<(i-1))){
            m|=(1<<(i-1));
         //}
        }
        return m;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,L,R;
        
        cin>>N>>L>>R;

        Solution ob;
        cout << ob.setAllRangeBits(N,L,R) << endl;
    }
    return 0;
}
// } Driver Code Ends