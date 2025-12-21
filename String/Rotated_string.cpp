class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal) return true;
        for(int i=0;i<s.length();i++){
            char t = s[0];
            s.erase(0,1);
            s.push_back(t);
            if(s==goal) return true;
        }
        return false;
    }
};