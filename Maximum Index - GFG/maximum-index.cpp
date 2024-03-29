//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
             int res=0;
 
       int count=0;
       
       for(int i=0;i<n-1;i++)
       {
           if(arr[i]<arr[i+1])
           {
               count++;
           }
       }
       
       if(count==0)
       {
           return 0;
       }
       
       for(int i=0;i<n-1;i++)
       {
           for(int j=n-1;j>i;j--)
           {
               if((j-i)<res)
               {
                   break;
               }
               
               if(arr[i]>arr[j])
               {
                   continue;
               }
               res=max(res,(j-i));
           }
       }
       
       return res;
        // code here
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends