//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
// User Function template for C++

// Structure of node
/*struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
/*t countNode(struct Node* tree){
        if(tree==NULL) return 0;
        int ans=1+countNode(tree->left)+countNode(tree->right);
        return ans;
    }
    bool isBST(struct Node* tree,int index,int countnode){
        if(tree==NULL) return true;
        int left=2*index+1;
        int right=2*index+2;
        if(index>=countnode) return true;
        else{
            left=isBST(tree,left,countnode);
            right=isBST(tree,right,countnode);
            return (left && right);
        }
    }
    vector<int> bfs(struct Node* node){
        vector<int> ans;
      if(node==NULL) return ans;
     
      queue<Node*> q;
      q.push(node);
      while(!q.empty()){
          Node* n=q.front();
          ans.push_back(n->data);
          q.pop();
          
              if(n->left!=NULL) q.push(n->left);
              if(n->right!=NULL) q.push(n->right);
              
          
      }
      return ans;
    }
    bool isHeap(struct Node* tree) {
        // code here
      vector<int> a=bfs(tree);
     int i=0;
     int countnode=countNode(tree);
     int left=2*i+1;
     int right=2*i+2;
     for(int i=0;i<a.size();i++){
         if(!(a[i]>a[left]) || !(a[i]>a[right])|| !isBST(tree,0,countnode))return false;
     }
     return true;
    }*/
    int getTotalNodes(Node* root){
    if(root==NULL) return 0;
    return 1 + getTotalNodes(root->left) + getTotalNodes(root->right);
}
bool isHeap(Node* root, int rootIndex, int totalNodes, int bound){
    if(root==NULL) return true;
    if(root->data>bound) return false;
    if(rootIndex>=totalNodes) return false;
    return isHeap(root->left, 2*rootIndex+1, totalNodes, root->data) && isHeap(root->right, 2*rootIndex+2, totalNodes, root->data);
}
bool isHeap(struct Node* tree) {
    int totalNodes = getTotalNodes(tree);
    return isHeap(tree, 0, totalNodes, tree->data);
}

};

//{ Driver Code Starts.

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node *root = buildTree(treeString);
        if (ob.isHeap(root))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
// } Driver Code Ends