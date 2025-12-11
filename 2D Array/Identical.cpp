// User function Template for C++

class Solution {
  public:
    int areMatricesIdentical(int N, vector<vector<int>> Grid1, vector<vector<int>> Grid2) {
        for(int i=0;i<Grid1.size();i++){
            for(int j=0;j<Grid2.size();j++){
                if(Grid1[i][j]!=Grid2[i][j]){
                    return 0;
                }
            }
        }
        return 1;
    }
};