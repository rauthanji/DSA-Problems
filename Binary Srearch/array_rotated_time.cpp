class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int n = nums.size();
        int l=0, h=n-1;
        int min1= INT_MAX;
        int i=-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[l]<=nums[h]){
                if(nums[l]<min1){
                    i=l;
                    min1 = nums[l];
                }
                break;
            }
            if(nums[l]<=nums[mid]){
                if(nums[l]<min1){
                    i=l;
                    min1 = nums[l];
                }
                l=mid+1;
            }else{
                if(nums[mid]<min1){
                    i=mid;
                    min1=nums[mid];
                }
                h=mid-1;
            }
        }
        return i;
    }
};