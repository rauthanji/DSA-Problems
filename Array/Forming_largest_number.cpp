class Solution {
  public:
    static bool compe(string s1,string s2){
        return s1+s2>s2+s1;
    }
    string findLargest(vector<int> &arr) {
        vector<string> vc;
        for(auto it:arr){
            vc.push_back(to_string(it));
        }
        sort(vc.begin(),vc.end(),compe);
        if(vc[0]=="0"){
            return "0";
        }
        string result="";
        for(string s:vc){
            result+=s;
        }
        return result;
    }
};