class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       vector<int> nums=nums1;
       int i=0,j=0,k=0,cnt=0;
       int x=nums.size()-1;
       while(x>=0 && !nums[x]){
           x--;
       }
       x++;
       while(i<x || j<nums2.size()){
           if(i>=x){
            while(j<nums2.size()){
                   nums1[k++]=nums2[j++];
               }
               break;
           }
           else if(j>=nums2.size()){
               while(i<x){
                   nums1[k++]=nums[i++];
                  
               }
               break;
           }
           else{
               if(nums[i]<=nums2[j]){
                   nums1[k++]=nums[i++];
               }
               else{
                   nums1[k++]=nums2[j++];
               }
           }
            

           
       } 
    }
};