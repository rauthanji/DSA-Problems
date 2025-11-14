class Solution {
public:
    bool check(vector<int>& nums) {
        int l = nums.size();
        int k=0,sorted=1;
        while(k<l){
            for(int i=0;i<l-1;i++){
                if(nums[i]<=nums[i+1]){
                    sorted=1;
                }else{
                    sorted=0;
                    break;
                }
            }
            if(sorted==0){
                int temp=nums[l-1];
                for(int j=l-1;j>0;j--){
                    nums[j]=nums[j-1];
                }
                nums[0]=temp;
            }else if(sorted==1){
                return true;
            }
            k++;
        }
        return false;
    }
};