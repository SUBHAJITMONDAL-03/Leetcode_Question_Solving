//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
        unordered_map<char, set<int>>mp;
        for(int i = 0; i < S.size(); i++){
            mp[S[i]].insert(i);
        }
        int j = 0;
        int num = 0;
        string temp = "";
        for(int i = 0; i < T.size(); i++){
            if(T[i] >= '0' && T[i] <='9'){
                temp += T[i];
            }
            else{
                if(temp.size() != 0){
                    num += stoi(temp);
                }
                temp = "";
                j += num;
                if(mp[T[i]].find(j) == mp[T[i]].end()){
                    return 0;
                }
                num = 1;
            }
        }
        if(temp.size() != 0){
            j += stoi(temp) + num;
        }
        else{
            j++;
        }
        return j == S.length();
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends