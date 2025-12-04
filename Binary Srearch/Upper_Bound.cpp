class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int n= nums.size();
        int l = 0, h = n-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]>x){
                n=mid ;
                h = mid-1;
            }else{
                l=mid+1;
            }
        }
        return  n;
    }
};