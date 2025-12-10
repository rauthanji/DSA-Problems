class Solution {
  public:
    vector<int> getAreas(int L, int W, int B, int H, int R) {
        vector<int> res;
        int areaR = L*W;
        int areaT = 0.5*B*H;
        int areaC = 3.14*(R*R);
        res.push_back(areaR);
        res.push_back(areaT);
        res.push_back(areaC);
        return res;
        
    }
};