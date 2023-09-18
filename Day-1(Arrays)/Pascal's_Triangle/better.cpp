// url: https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans(n,vector<int>(1,1));
        
        for(int r=1;r<n;r++){
            for(int c=1;c<r;c++){
                int sum=ans[r-1][c-1]+ans[r-1][c];
                ans[r].push_back(sum);
            }
            ans[r].push_back(1);
        }
        return ans;
    }
};