//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	     int odd = 0, even = 0;
    for (int i = 0; i < s.length(); i++)
    {
      if (i % 2 == 0)
        even += s[i] - '0';
      else
        odd += s[i] - '0';
    }
    return (abs(odd - even) % 3 == 0);
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends