class Solution {
  public:
    string MaxNumber(vector<int>& arr) {
        string s="";
        sort(arr.begin(),arr.end(),greater<int>());
        for(auto it:arr){
            s+=to_string(it);
        }
        return s;
    }
};