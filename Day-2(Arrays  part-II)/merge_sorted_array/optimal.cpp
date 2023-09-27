class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
           int k=m+n-1;
           int i=m-1;
           int j=n-1;
           
           while(k>=0){
                if(i<0){
                    nums1[k--]=nums2[j--];
                    continue;
                }
                if( j<0 || nums1[i]>nums2[j])
                    nums1[k--]=nums1[i--];
                else 
                    nums1[k--]=nums2[j--];
                
           }
    }
};