//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution{
public:
   int minCost(vector<vector<int>> &costs) {

        // write your code here

        

        int ans = INT_MAX ;

        int N = costs.size() ;

        

        int k = costs[0].size() ;

        

        vector<int>prev( k , 0 ) , next( k , 0 ) ;

        

        if( k == 1 && N > 1 ) return -1 ;

        

             for( int k = 0 ; k < costs[0].size()  ; k++ )

            {

               prev[k] = costs[0][k]  ;

               

            }

            

            next = prev ;

            

            

             for( int i = 1 ; i < N ; i++ )

            {

                 int mn1 = INT_MAX , mn2 = INT_MAX , i1 = -1  ;

                 

                 for( int k = 0 ; k < costs[0].size()  ; k++ )

            {

                 if( prev[k] < mn1 )

                 {

                     mn1 = prev[k] ;

                     i1  = k ;

                 }

            }

            

            for( int k = 0 ; k < costs[0].size()  ; k++ )

            {

                 if( prev[k] < mn2 && k != i1 )

                 {

                     mn2 = prev[k] ;

                    

                 }

            }

                 

                 for( int k = 0 ; k < costs[0].size()  ; k++ )

            {

                if( k != i1 )

                {

                     next[k] = costs[i][k] + mn1 ;

                }

                else{

                     next[k] = costs[i][k] + mn2 ;

                }

               

            }

            

            prev = next ;

            

            }

            

            for( int k = 0 ; k < costs[0].size() ; k++ )

            {

                ans = min( ans , next[k] ) ;

            }

            

            

            return ans ;

        

    }

};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> costs(n, vector<int>(k));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) cin >> costs[i][j];
        }
        Solution obj;
        cout << obj.minCost(costs) << endl;
    }
}
// } Driver Code Ends