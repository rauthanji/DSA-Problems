class Solution {
public:
    int beautySum(string s) {
        int sumB =0;
        for(int i=0;i<s.length();i++){
            map<char,int> mpp;
            for(int j=i;j<s.length();j++){
                mpp[s[j]]++;
                int mxx= 0, minn = s.length();
                for(auto it: mpp){
                    mxx=max(mxx,it.second);
                    minn=min(minn,it.second);
                }
                sumB += (mxx-minn);
            }
        }
        return sumB;
    }
};