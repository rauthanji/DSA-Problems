class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s = nums.size();
        int total = s*(s+1)/2;
        int sum=0;
        for(auto it:nums){
            sum+=it;
        }
        return total-sum;

    }
};