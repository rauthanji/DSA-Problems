class Solution {
public:
    string removeOuterParentheses(string s) {
        string res ="";
        int count =0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(count==0){
                    count++;
                    continue;
                }else{
                    res+=s[i];
                    count++;
                }
            }else if(s[i]==')'){
                count--;
                if(count==0){
                    continue;
                }
                res+=s[i];
            }
        }
        return res;
    }
};