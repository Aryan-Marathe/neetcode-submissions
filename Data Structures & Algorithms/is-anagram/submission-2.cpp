class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        map<int,int> mpp1;
        map<int, int>mpp2;

        for(int i=0;i<n;i++){
            mpp1[s[i]]++;
        }
        for(int i=0;i<m;i++){
            mpp2[t[i]]++;
        }

        if(mpp1==mpp2){
            return true;
        }
        else{
            return false;
        }
    }
};
