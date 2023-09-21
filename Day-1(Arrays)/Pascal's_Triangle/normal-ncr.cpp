class Solution {
public:
    int nCr(int n,int r){
      int res=1;
      for(int i=n;i>r;i--){
        res*=i;
        res/=(n-i+1);
      }
      return res;
    }
    vector<vector<int>> generate(int n) {
       vector<vector<int>> ans(1,vector<int>(1,1));
        for(int i=1;i<n;i++){
          vector<int> temp(1,1);
          for(int j=1;j<=i;j++){
              temp.push_back(nCr(i,j));
          }
          ans.push_back(temp);
        }
        return ans;
    }
};