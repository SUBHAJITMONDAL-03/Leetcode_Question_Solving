//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    // Write your code here.
    // User function Template for C++
    
    int count=0;
    
    for(int i=1;i<str.length();i++)
    {
        if(str[i]!=str[i-1]) count++;
    }
    
    if(count%2==0) return count/2+1;
    return (count+1)/2+1;
 }

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends