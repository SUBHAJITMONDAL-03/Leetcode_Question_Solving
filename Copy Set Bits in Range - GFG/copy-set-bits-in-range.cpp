//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        int z=1;
        for(int i = l-1;i<=r-1;i++){
            z = (1<<i);
            if(y & z)
              x = x|(y&z);
        }
        return x;
    
    
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends