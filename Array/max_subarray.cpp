class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s = nums.size();
        int maXsum=nums[0];
        int sum=nums[0];
        for(int i=1;i<s;i++){
            sum=max(nums[i],sum+nums[i]);
            maXsum=max(sum,maXsum);
        }
        return maXsum;
    }
};