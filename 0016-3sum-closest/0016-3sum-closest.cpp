class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        int diff=INT_MAX;
        
        for(int i=0;i<n;i++){
            
             int first=nums[i];
             int start=i+1;
             int end=n-1;
            while(end>start){
                
                 if(first+nums[start]+nums[end]==target){
                     return target;
                 }
                
                 else if(abs(first+nums[start]+nums[end]-target)<diff){
                     diff=abs(first+nums[start]+nums[end]-target);
                     ans=first+nums[start]+nums[end];
                 }
                
                if(first+nums[start]+nums[end]>target) end--;
                else start++;
                

                
            }
        }
        return ans;
    }
};