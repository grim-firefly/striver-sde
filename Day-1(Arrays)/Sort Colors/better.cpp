// better solution but use extra space 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ara[3]={0};
        for(int i=0;i<nums.size();i++){
            ara[nums[i]]++;
        }
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            while(ara[cnt]==0)
                cnt++;
            nums[i]= cnt;
            ara[cnt]--;
        }
    }
};