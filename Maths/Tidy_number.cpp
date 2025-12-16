// User function template for C++

class Solution {
  public:
    int isTidy(int N) {
        int com=-1;
        while(N>0){
            int temp = N%10;
            if(com==-1){
                com=temp;
            }else if(temp>com){
                return 0;
            }
            com=temp;
            N=N/10;
        }
        return 1;
    }
};