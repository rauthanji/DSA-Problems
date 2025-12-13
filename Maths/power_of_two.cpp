class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        long long i=2;
        while(i<n){
            i=i*2;
        }
        if(i==n){
            return true;
        }
        return false;
    }
};