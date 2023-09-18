// url : https://leetcode.com/problems/set-matrix-zeroes/
class Solution {
public:
    

    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<bool> row(r,false);
        vector<bool> col(c,false);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(!matrix[i][j]){
                    row[i]=col[j]=true;
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(row[i] || col[j]){
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};