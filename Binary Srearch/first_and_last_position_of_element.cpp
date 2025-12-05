class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l =0, h = n-1;
        int left=-1,right=-1;
        while(l<=h){
            int mid = (l+h)/2;
            if(nums[mid]>=target){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        if(l<n && nums[l]==target){
            left = l;
        }else{
            return {-1,-1};
        }
        l=0,h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]<=target){
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        right = h;
        return {left,right};
    }
};