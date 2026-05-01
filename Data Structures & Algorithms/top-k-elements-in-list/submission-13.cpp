class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;
        for (int x : nums) freq[x]++;
        priority_queue<pair<int, int>> pq;
        for (auto &p : freq) {
            pq.push({p.second, p.first});
        }

        vector<int> ans;
        ans.reserve(k);
        while (k-- > 0 && !pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    
}
       
};
