//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        // code here
        stack<char> st;
        string ans="";
        st.push(s[0]);
        int curr_idx=1;
        while(curr_idx<s.length()){
            if(st.size()==0) {
                st.push(s[curr_idx]);
            }
            else if(s[curr_idx]==st.top()){
                st.pop();
            }
            else{
                st.push(s[curr_idx]);
            }
            curr_idx++;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        if(ans.length()==0) ans="-1";
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends