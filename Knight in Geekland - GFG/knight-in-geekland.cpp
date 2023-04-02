//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution{
public:
    int knightInGeekland(int start_x,int start_y,vector<vector<int>> &arr){
        int n = arr.size();
        int m = arr[0].size();
        vector<int> delR {-2, -2, -1, 1, 2, 2, 1, -1};
        vector<int> delC {-1, 1, 2, 2, 1, -1, -2, -2};
        vector<int> coins;
        vector<vector<int>> visited(n, vector<int>(m, 0));
        queue<pair<int, int>> qu;
        qu.push({start_x, start_y});
        visited[start_x][start_y] = 1;
        
        while(!qu.empty())
        {
            int lvlsize = qu.size();
            int stepcoins = 0;
            for(int i=0; i<lvlsize; i++)
            {
                pair<int, int> val = qu.front();
                qu.pop();
                int x = val.first;
                int y = val.second;
                stepcoins = stepcoins + arr[x][y];
                for(int k=0; k<8; k++)
                {
                    int newrow = x + delR[k];
                    int newcol = y + delC[k];
                    if(newrow >= 0 && newcol >= 0 && newrow < n && newcol < m && visited[newrow][newcol] == 0)
                    {
                        visited[newrow][newcol] = 1;
                        qu.push({newrow, newcol});
                    }
                }
            }
            coins.push_back(stepcoins);
        }
        int ans = -1;
        int csize = coins.size();
        int currmax = INT_MIN;
        for(int i=csize-1; i>=0 ; i--)
        {
            if(i+coins[i] < csize)
            {
                coins[i] = coins[i] + coins[i+coins[i]];
            }
            if(currmax <= coins[i])
            {
                ans = i;
                currmax = coins[i];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,start_x,start_y;
        cin>>n>>m>>start_x>>start_y;
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        Solution ob;
        cout<<ob.knightInGeekland(start_x,start_y,arr)<<endl;
    }
}
// } Driver Code Ends