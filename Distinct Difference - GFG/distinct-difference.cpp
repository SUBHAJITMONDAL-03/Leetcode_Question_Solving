//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    vector<int> getDistinctDifference(int N, vector<int> &A) {
        // code here
          map<int,int>mp,mp1;
      vector<int>v(N+2,0),v1(N+2,0);
     
      for(int i=1;i<=N;i++){
          mp[A[i-1]]++;
          v[i]=(mp.size());
      }
      
       for(int i=N;i>0;i--){
          mp1[A[i-1]]++;
          v1[i]=(mp1.size());
      }

      vector<int>ans;
      for(int i=1;i<=N;i++){
          ans.push_back(v[i-1]-v1[i+1]);
      }
      return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        vector<int> res = obj.getDistinctDifference(N, A);
        
        Array::print(res);
        
    }
}

// } Driver Code Ends