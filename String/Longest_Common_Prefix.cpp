class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string prr  = strs[0];
        for(int i=1;i<strs.size();i++){
            string &cc = strs[i];
            int j=0;
            while(j<prr.length() && j<cc.length() && prr[j]==cc[j]){
                j++;
            }
            prr= prr.substr(0,j);
            if(prr.empty()) return "";
        }
        return prr;
    }
};