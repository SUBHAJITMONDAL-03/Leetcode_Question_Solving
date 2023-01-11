//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        // Code here
       long long int count=0;
        //int n=arr.size();
        //sort(arr.begin(),arr.end());
        unordered_map<int,int> mp;
        for(auto a:arr){
            mp[a]++;
        }
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]>=2){
                mp[arr[i]]--;
                mp[arr[i]+1]++;
                count++;
                arr.push_back(arr[i]+1);
            }
        }
        return count;
        /*unordered_map<int,int> mp;
        for(auto a:arr){
            mp[a]++;
        }
        long long int count=0;
        for(int i=0; i<arr.size();i++){
            if(mp[arr[i]]>=2){
                mp[arr[i]]--;
                mp[arr[i]+1]++;
                count++;
                arr.push_back(arr[i]+1);
            }
        }
        return count;*/
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minIncrements(arr, N) << endl;
    }
}
// } Driver Code Ends