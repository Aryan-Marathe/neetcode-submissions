class Solution {
public:

    int time(vector<int>& piles,int mid){
        int hrs=0;
        for(int i=0;i<piles.size();i++){
            hrs+=ceil((double)piles[i]/(double)mid);
        }
        return hrs;
    }
    int find_max(vector<int> &piles){
        int maxi=INT_MIN;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>maxi){
                maxi=piles[i];
            }
        }
        return maxi;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=find_max(piles);
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(time(piles,mid)<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
