//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{

    public:

    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){

      

      int i=0,j=0;

      int left=1,right=2,up=3,down=4;

      int position=right;

      pair<int,int> ans;

      

      while(i<R && j<C &&i>=0 &&j>=0)

      {

          if(matrix[i][j]==0)

          {

             if(position==left)

             {

                 ans.first=i;

                 ans.second=j;

                 j--;

             }

             else if( position==right)

             {

                 ans.first=i;

                 ans.second=j;

                 j++;

             }

              else if( position==up)

             {

                 ans.first=i;

                 ans.second=j;

                 i--;

             }

              else if( position==down)

             {

                 ans.first=i;

                 ans.second=j;

                 i++;

             }

             

              

          }

          else if(matrix[i][j]==1 && position==left)

          {

              position=up;

              matrix[i][j]=0;

              ans.first=i;

              ans.second=j;

              i--;

              

          }

           else if(matrix[i][j]==1 && position==right)

          {

              position=down;

              matrix[i][j]=0;

              ans.first=i;

              ans.second=j;

              i++;

          }

           else if(matrix[i][j]==1 && position==up)

          {

              position=right;

              matrix[i][j]=0;

              ans.first=i;

              ans.second=j;

              j++;

              

              

          }

           else if(matrix[i][j]==1 && position==down)

          {

              position=left;

              matrix[i][j]=0;

              ans.first=i;

              ans.second=j;

              j--;

          }

          

          

      }

      

      return ans;

        

    }

};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix, row, col);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends