class Solution {
  public:
    string getLongestPal(string &s) {
        int n= s.length();
        if(n<=1) return s;
        int start=0, maxlen = 1;
        for(int i=0;i<n;i++){
            expand(s,i,i,start,maxlen);
            expand(s,i,i+1,start,maxlen);
        }
        return s.substr(start,maxlen);
    }
    void expand(string &s,int left,int right,int &start,int &maxlen){
        while(left>=0 && right< s.length() && s[left]==s[right]){
            int clen = right-left+1;
            if(clen>maxlen){
                maxlen = clen;
                start = left;
            }
            left--;
            right++;
        }
    }
    
};