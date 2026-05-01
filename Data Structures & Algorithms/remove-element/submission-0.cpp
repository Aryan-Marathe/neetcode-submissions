class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n=nums.size();
        int i=0;
        int j=n-1;
        int cnt=0;

        while(j >= 0 && nums[j]==val){
            j--;
        }

        while(i<=j){
            if(nums[i]==val){
                swap(nums[i],nums[j]);
                cnt++;
                i++;
                while(j >= 0 && nums[j] == val) j--;
            }
            else{
                i++;
            }
        }
        return j + 1;
    }
};