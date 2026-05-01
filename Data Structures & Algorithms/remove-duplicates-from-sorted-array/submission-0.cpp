class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int n=nums.size();  
    vector<int> ans_arr;
    int prev=nums[0];

    ans_arr.push_back(nums[0]);

    for(int i=1;i<n;i++){
        if(nums[i]!=prev){
            ans_arr.push_back(nums[i]);
            prev=nums[i];
        }
    }

    int k=ans_arr.size();

    for(int i=0;i<k;i++){

        nums[i]=ans_arr[i];
    }
    return k;
        
    }
};