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
        int getMinimumDays(int n,string s, vector<int> &v) {
        map<int, char> mp;
        for(int i=0; i<n;i++) mp[i]=s[i];
        for(auto &ch:s)ch='?';
        int ans=0;
        for(int i=n-1; i>=0; i--){
            if (v[i]!=n-1 and v[i]!=0){
                if (s[v[i]-1]!=mp[v[i]] and s[v[i]+1]!=mp[v[i]]){
                    s[v[i]]=mp[v[i]];
                    ans=i;
                }
                else break;
            }
            else if (v[i]==n-1){
                if (s[v[i]-1]!=mp[v[i]]){
                    s[v[i]]=mp[v[i]];
                    ans=i;
                }
                else break;
            }
            else{
                if (s[v[i]+1]!=mp[v[i]]){
                    s[v[i]]=mp[v[i]];
                    ans=i;
                }
                else break;
            }
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
        string S;cin>>S;
        
        vector<int> P(N);
        Array::input(P,N);
        
        Solution obj;
        int res = obj.getMinimumDays(N,S, P);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends