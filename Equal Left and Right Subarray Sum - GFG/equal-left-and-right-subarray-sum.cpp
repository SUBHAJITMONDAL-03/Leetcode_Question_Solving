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
    int equalSum(int N, vector<int> &arr) {
        vector<int>pre(N);
        vector<int>next(N);
        pre[0]=0;
        next[N-1]=0;
        for(int i=1;i<N;i++){
            pre[i]=pre[i-1]+arr[i-1];
        }
        for(int i=N-2;i>=0;i--){
            next[i]=next[i+1]+arr[i+1];
        }
        int ans=-1;
        for(int i=0;i<N;i++){
            if(pre[i]==next[i]){
                ans=i;
                break;
            }
        }
        if(ans==-1)
        return -1;
        else
        return ans+1;
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
        int res = obj.equalSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends