class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<vector<int>> temp(c,vector<int>(r));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                temp[j][r-i-1]=matrix[i][j];
            }
        }
        matrix=temp;
    }
};