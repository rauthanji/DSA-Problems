class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            int a = target - num;
            if(mpp.find(a) != mpp.end()){
                return {mpp[a],i};
            }
            mpp[num]=i;
        }
        return{-1,-1};
    }
};