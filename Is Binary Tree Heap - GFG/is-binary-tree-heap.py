#User Template for python3

'''
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

class Solution:
    #Your Function Should return True/False
    def isHeap(self, root):
        #Code Here
        if not root: return True
        queue = [(root, 1)]
        level = 0
        while queue:
            for i, v in enumerate(queue):
                if v[1] != i+1: return False
            new_queue = []
            for v, i in queue:
                if v.left:
                    if v.left.data > v.data: return False
                    new_queue.append((v.left, 2 * i - 1))
                if v.right:
                    if v.right.data > v.data: return False
                    new_queue.append((v.right, 2 * i))
            if new_queue and len(queue) != (1 << level): return False
            level += 1
            queue = new_queue
        return True
#{ 
 # Driver Code Starts
#Initial Template for Python 3

#Contributed by Susanta Mukherjee
import sys
sys.setrecursionlimit(10**6)
from collections import deque
# Tree Node
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None

    
# Function to Build Tree   
def buildTree(s):
    #Corner Case
    if(len(s)==0 or s[0]=="N"):           
        return None
        
    # Creating list of strings from input 
    # string after spliting by space
    ip=list(map(str,s.split()))
    
    # Create the root of the tree
    root=Node(int(ip[0]))                     
    size=0
    q=deque()
    
    # Push the root to the queue
    q.append(root)                            
    size=size+1 
    
    # Starting from the second element
    i=1                                       
    while(size>0 and i<len(ip)):
        # Get and remove the front of the queue
        currNode=q[0]
        q.popleft()
        size=size-1
        
        # Get the current node's value from the string
        currVal=ip[i]
        
        # If the left child is not null
        if(currVal!="N"):
            
            # Create the left child for the current node
            currNode.left=Node(int(currVal))
            
            # Push it to the queue
            q.append(currNode.left)
            size=size+1
        # For the right child
        i=i+1
        if(i>=len(ip)):
            break
        currVal=ip[i]
        
        # If the right child is not null
        if(currVal!="N"):
            
            # Create the right child for the current node
            currNode.right=Node(int(currVal))
            
            # Push it to the queue
            q.append(currNode.right)
            size=size+1
        i=i+1
    return root
    


if __name__=="__main__":
    t=int(input())
    for _ in range(0,t):
        root=buildTree(input())
        ob = Solution()
        if ob.isHeap(root):
            print(1)
        else:
            print(0)
        
        

# } Driver Code Ends