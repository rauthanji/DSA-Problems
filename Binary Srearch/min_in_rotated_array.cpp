class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l=0,h=n-1;
        int min1= INT_MAX;
        while(l<=h){
            int mid = (l+h)/2;
            if(nums[l]<=nums[mid]){
                min1 = min(min1, nums[l]);
                l=mid+1;
            }else{
                min1= min(min1, nums[mid]);
                h=mid-1;
            }            
        }
        return min1;
    }
};