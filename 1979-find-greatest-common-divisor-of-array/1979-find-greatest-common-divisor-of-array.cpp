class Solution {
public:
     int gcd(int a,int b){
         
         if(a==0)
             return b;
         
         return gcd(b%a,a);
     }
    int findGCD(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        int ans=gcd(nums[0],nums[n-1]);
        
        return ans;
    }
};