class Solution {
public:
    int maxDepth(string s) {
        int maxD = 0;
        int tempD =0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                tempD++;
            }else if(s[i]==')'){
                maxD = max(maxD,tempD);
                tempD--;
            }
        } 
        return maxD;
    }
};