class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mpp;
        string res ="";
        for(auto it: s){
            mpp[it]++;
        }
        
        priority_queue<pair<int,char>> pq;
        for(auto it: mpp){
            pq.push({it.second,it.first});
        }

        while(!pq.empty()){
            auto top = pq.top();
            pq.pop();
            while(top.first>0){
                res+=top.second;
                top.first--;
            }
        }
        return res;

    }
};