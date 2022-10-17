class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
         sort(nums.begin(),nums.end());
         int n=nums.size();
         vector<vector<int>> ans;
        if(nums[0]>0){
            return {};
        }
        for(int i=0;i<n;i++){

            if(nums[i]>0){
                break;
            }
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int low=i+1;
            int high=n-1;
            int sum=0;
            while(high>low){
                sum=nums[i]+nums[low]+nums[high];
                if(sum > 0){
                    high--;
                }
                
                else if(sum<0){
                    low++;
                }
                else{
                    ans.push_back({nums[i],nums[high--],nums[low++]});
                    while(high>low && nums[low]==nums[low - 1]){
                        low++;
                    }
                    while(high>low && nums[high]==nums[high + 1]){
                        high--;
                    }
                }
            }
        }
        return ans;
    }
};
