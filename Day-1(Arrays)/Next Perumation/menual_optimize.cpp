class Solution {
public:

    int findNotDescending(vector<int> &nums){
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                return i;
            }
        }
        return -1;
    }
    void swapWithGreater(vector<int> &nums,int idx){
      for(int i=nums.size()-1;i>idx;i--){
          if(nums[i]>nums[idx]){
              swap(nums[i],nums[idx]);
              break;
          }
      }
    }
    void nextPermutation(vector<int>& nums) {
        
        int idx=findNotDescending(nums);
        if(idx==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            swapWithGreater(nums,idx);
            reverse(nums.begin()+idx+1,nums.end());
        }
    }
};