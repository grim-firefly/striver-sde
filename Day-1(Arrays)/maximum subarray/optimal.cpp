class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0];
        int cur=0;
        for(int i=0;i<nums.size();i++){
            cur=max(cur+nums[i],nums[i]);
            sum=max(sum,cur);
        }
        return sum;
    }
};