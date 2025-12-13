class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1) return true;
        long long i = 3;
        while(i<n){
            i=i*3;
        }
        if(i==n) return true;
        return false;
    }
};