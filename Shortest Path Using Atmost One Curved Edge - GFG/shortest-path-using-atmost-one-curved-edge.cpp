//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
        void dijkstra(int x, vector<pair<int, int>> adj[], vector<int>& dist){
        dist[x] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, x}); //dis node
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int w = it.first;
            int node = it.second;
            for(auto it : adj[node]){
                int Node = it.first;
                int W = it.second;
                if(dist[Node] > w + W){
                    dist[Node] = w + W;
                    pq.push({dist[Node], Node});
                }
            }
        }
    }
    int shortestPath(int n, int m, int a, int b, vector<vector<int>> &edges) {
        vector<pair<int, int>> adj[n + 1];
        for(auto it : edges){
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }
        vector<int> dist_a(n + 1, 1e9);
        dijkstra(a, adj, dist_a);
        
        vector<int> dist_b(n + 1, 1e9);
        dijkstra(b , adj, dist_b);
        
        int res = dist_a[b];
        
        for(auto it : edges){
            int u = it[0];
            int v = it[1];
            int cur_w = it[3];
            res = min(res, dist_a[u] + cur_w + dist_b[v]);
            res = min(res, dist_a[v] + cur_w + dist_b[u]);
        }
        if(res >= 1e9)
            return -1;
        return res;
    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,a,b;
        cin>>n>>m;
        cin>>a>>b;
        
        vector<vector<int>> edges;
        
        for(int i=0; i<m; i++)
        {
            int u,v,x,y;
            cin>>u>>v>>x>>y;
            edges.push_back({u,v,x,y});
        }

        Solution ob;
        cout << ob.shortestPath(n,m,a,b,edges) << endl;
    }
    return 0;
}
// } Driver Code Ends