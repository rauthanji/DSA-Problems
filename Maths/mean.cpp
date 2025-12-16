class Solution {
  public:
    int findMean(vector<int>& arr) {
        int sum=0;
        for(auto it:arr){
            sum+=it;
        }
        int mean = sum/arr.size();
        return mean;
    }
};