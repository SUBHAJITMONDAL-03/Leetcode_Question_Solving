//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        
        vector<char> vecA,veca;
        
        
		for(int i=0;i<n;i++)
		{
			if(int(str[i])<97)
			vecA.push_back(str[i]);
			else
			veca.push_back(str[i]);
		}
		
		
		sort(vecA.begin(),vecA.end());
		sort(veca.begin(),veca.end());
		
		int vcA=0,vca=0;
		string answer="";
		
		
		for(int i=0;i<n;i++)
		{
		   
			if(int(str[i])<97)
			answer+=vecA[vcA++];
			
			
			else
			answer+=veca[vca++];
		}
		
		return answer;
    }
    
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends