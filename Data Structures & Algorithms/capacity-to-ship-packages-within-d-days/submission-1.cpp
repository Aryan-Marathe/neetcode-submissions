class Solution {
public:

    int find_max(vector<int>& weights){
        int max=INT_MIN;
        int n=weights.size();
        for(int i=0;i<n;i++){
            if(weights[i]>max){
                max=weights[i];
            }
        }
        return max;
    }

    int find_sum(vector<int>& weights){
        int sum=0;
        int n=weights.size();
        for(int i=0;i<n;i++){
            sum+=weights[i];
        }
        return sum;
    }

    int find_days(vector<int>& weights, int mid){
        int days=1;
        int load=0;
        int n=weights.size();

        for(int i=0;i<n;i++){
            if(weights[i]+load>mid){
                days++;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int i=find_max(weights);
        int j=find_sum(weights);

        while(i<=j){
            int mid=(i+j)/2;

            if(find_days(weights,mid)<=days){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return i;
    }
};