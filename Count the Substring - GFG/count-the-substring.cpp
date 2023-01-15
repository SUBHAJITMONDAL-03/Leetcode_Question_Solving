//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
#define ll long long

class Solution{
public:
  void merge(vector<ll> &v, ll start, ll mid, ll end, ll&inversions){

        vector<ll> temp(end - start + 1);

        ll i =start, j = mid+1, k=0;

        while(i<=mid && j<=end){

            if(v[i]<= v[j]){

                temp[k++]=v[i++];

            }else{

                inversions += (mid - i + 1);

                temp[k++]= v[j++];

            

                

            }

        }

        while(i <= mid)

            temp[k++]= v[i++];

            while(j <= end)

                temp[k++]=v[j++];

                k=0;

                for(ll i=start; i<=end; i++)

                v[i] = temp[k++];

    }

  void mergesort(vector<ll> &v, ll start, ll end, ll &inversions){

    if(start< end){

        ll mid=(start + end)/ 2;

        mergesort(v, start, mid , inversions);

        mergesort(v, mid+1, end, inversions);

        merge(v, start, mid , end, inversions);

    }

  }

  ll countInversions(vector<ll> &v ){

      ll inversions =0;

      mergesort(v, 0, v.size()-1, inversions);

      return inversions;

     

  }

  ll countSubstring(string S){

    ll n=S.size();

    vector<ll> temp(n);

    for(ll i=0; i<n; i++){

        if(S[i]=='1')

        temp[i]=1;

        else

        temp[i]=-1;

    }

    vector<ll> preSum(n);

    preSum[0]= temp[0];

    for(ll i=1;i<n;i++)

        preSum[i]=preSum[i-1] + temp[i];

        ll count =0;

        for(auto x: preSum){

            if(x>0)

            count ++;

        }

        reverse(preSum.begin(), preSum.end());

        ll inversions = countInversions(preSum);

        return inversions + count;

        

  }
};

//{ Driver Code Starts.
int main() {
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
 int t=1;
 cin>>t;
 for(int i=1;i<=t;i++){
    string S;
    cin>>S;
    Solution obj;
    long long ans =obj.countSubstring(S);
    cout<<ans<<endl;
 }
}
// } Driver Code Ends