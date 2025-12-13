// User function Template for C++
class Solution {
  public:
    long long int commDiv(long long int a, long long int b) {
        int i=1;
        long long count=0;
        while(i<=a){
            if(a%i==0 && b%i==0){
                count++;
            }
            i++;
        }
        return count;
    }
};