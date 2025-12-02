class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int s= nums.size();
        map<int,int> arr;
        for(int i=0;i<s;i++){
            arr[nums[i]]++;
        }
        for (auto it : arr) {
        if (it.second > (s / 2)) {
            return it.first;
        }
    }
    return -1;
    }