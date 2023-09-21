
// This problem is a variation of the popular Dutch National flag algorithm. 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,h=nums.size()-1;
        for(int m=0;m<=h;){
            if(nums[m]==0){
                swap(nums[m],nums[l]);
                l++;
                m++;
            }
            else if(nums[m]==2){
                swap(nums[m],nums[h]);
                h--;
            }
            else{
                m++;
            } 
        }
    }
};