//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
       /* int sum=(n*(n+1)/2);
        int asum=accumulate(array.begin(),array.end(),0);
        
        int mn=sum-asum;
        
        return mn;*/
        sort(array.begin(),array.end());
        int i;
        for( i=0;i<n;i++){
            
            if(i+1==array[i]){
                
                continue;
            }
            int mn=i+1;
            return mn;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends