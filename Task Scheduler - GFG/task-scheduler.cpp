//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        vector<int> v(26);
        int ans=INT_MIN;
        for(char c: tasks)
        {
            v[c-'A']++;
        }
        sort(v.begin(),v.end(),greater<int> ());
        for(int i=0;i<26;i++)
        {
            if(!v[i]) break;
            ans=max(ans,(i+1+((K+1)*(v[i]-1))));
        }
        return max(ans,N);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends