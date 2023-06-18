//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int distributeTicket(int N, int K) {
        // code here
        int cnt = 1;
        int start = 1;
        int end = N;
        while(end-start >= K){
            if (cnt % 2 != 0){
                start = start+K;
            }
            else{
                end = end - K;
            }
            cnt++;
        }
        if (cnt % 2 == 0){
        return start;}
        return end;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends