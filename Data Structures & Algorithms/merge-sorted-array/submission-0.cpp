class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i=m;
        int j=0;

        while(n>0){
            swap(nums1[i],nums2[j]);
            j++;
            i++;
            n--;
        } 

        sort(nums1.begin(),nums1.end());
    }
};