class Solution {
public
    int singleNumber(vectorint& nums) {
        int x=0;
        for(int i=0;inums.size();i++){
            x=x^nums[i];
        }
        return x;

        return 0;
    }
};