class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int n = nums.size();
        int l=0, h = n-1;
        int ub=-1;
        int lb=-1;
        while(l<=h){
            int mid = (l+h)/2;
            if(nums[mid]==x){
                ub=nums[mid];
                lb=nums[mid];
                return {lb,ub};
            }
            if(nums[mid]>=x){
                ub=nums[mid];
                h=mid-1;
            }else{
                lb=nums[mid];
                l=mid+1;
            }
        }
        return {lb,ub};
    }
};