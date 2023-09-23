class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int mn=prices[0];
        for(auto &x:prices){
            ans=max(ans,x-mn);
            mn=min(mn,x);
        }
        return ans;
    }
};