class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
           int sum2=accumulate(nums.begin(),nums.end(),0);
           int n=nums.size();
            set<int> s;
        
        for(auto& i: nums){
            
            s.insert(i);
        }
           int sum3=accumulate(s.begin(),s.end(),0);
        
        int rn=sum2-sum3;
           
        int sum=(n*(n+1)/2);

        int mn=sum-sum3;
        



        
        return {rn,mn};
    }
};