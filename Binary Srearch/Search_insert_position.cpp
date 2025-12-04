class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0, h=n-1;
        int in = n;
        while(l<=h){
            int mid=(l+h)/2;
            // if(nums[mid]==target) return mid;
            if(nums[mid]>=target){
                h=mid-1;
                in = mid;
            }else if(nums[mid]<target){
                l=mid+1;
            }

        }
        return in;

    }
};