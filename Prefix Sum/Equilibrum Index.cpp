class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n =nums.size();
        vector<int> subsum(n);
        subsum[0]=nums[0];
        for(int i=1;i<n;i++){
            subsum[i]=subsum[i-1]+nums[i];
        }
        for(int i=0;i<n;i++){
            int leftsum;
            if(i==0){
                leftsum=0;
            }else{
                leftsum=subsum[i-1];
            }
            int rightsum;
            if(i==(n-1)){
                rightsum = 0;
            }else{
                rightsum = subsum[n-1]-subsum[i];
            }
            if(leftsum==rightsum){
                 return i;
            }
    
        }
        return -1;
    }
};