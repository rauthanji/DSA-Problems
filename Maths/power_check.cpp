class Solution {
  public:
    int isPowerOfAnother(int X, int Y) {
        int product = 1;
        if(X==1 && Y>X) return false;
        if(X==1 && Y==1) return true;
        while(product<Y){
            product=product*X;
            
        }
        if(product==Y){
            return true;
        }
        return false;
    }
};