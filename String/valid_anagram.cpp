class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        map<char, int> mpp1;
        for(auto it: s){
            mpp1[it]++;
        }
        map<char, int> mpp2;
        for(auto it: t){
            mpp2[it]++;
        }
        if(mpp1!=mpp2)return false;
        else return true;

    }
};