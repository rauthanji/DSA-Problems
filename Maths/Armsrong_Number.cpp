// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int num=n;
        int pro =0;
        while(num>0){
            int rem = num%10;
            pro+=(rem*rem*rem);
            num=num/10;
        }
        if(pro==n){
            return true;
        }
        return false;
    }
};