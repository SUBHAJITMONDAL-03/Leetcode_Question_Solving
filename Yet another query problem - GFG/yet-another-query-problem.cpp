//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) {
        // code here
            unordered_map<int,int> freq;
        vector<int> count(N,0);
        for(int i = N-1;i>=0;i--)
        {
            freq[A[i]]++;
            count[i] = freq[A[i]];
        }
        vector<int> res;
        for(int i = 0;i<num;i++){
           int l = Q[i][0],r = Q[i][1] ,k = Q[i][2];
           int counter = 0;
           for(int j = l;j<=r;j++){
               if(count[j] == k){
                // cout<<"query == "<<i<<" : ";
                // cout<<"frequency of "<<arr[j]<<" is "<<count[j]<<" from "<<j<<" to "<<(n-1)<<endl;
                counter++;
               }
           }
           res.push_back(counter);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends