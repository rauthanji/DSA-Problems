// User function Template for C++

class Solution {
  public:
    int isPerfect(int N) {
        int num = N;
        int sum=0;
        while(num>0){
            int temp = num%10;
            int fact=1;
            for(int i=1;i<=temp;i++){
                fact=fact*i;
            }
            sum+=fact;
            num=num/10;
        }
        if(sum==N) return 1;
        return 0;
    }
};