class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        string ans ="";
        int l = 0, r = s.size()-1;
        while(l<=r){
            char ch = s[l];
            if(ch!=' '){
                temp+=ch;
            }else if(ch==' ' && temp!=""){
                if(ans!="") ans = temp+' '+ans;
                else ans = temp;
                temp ="";
            }
            l++;
        }
        if(temp!=""){
            if(ans!="") ans = temp+' '+ans;
            else ans = temp;
        }
        return ans;

    }
};