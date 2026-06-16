class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> cnt;
        for (int n : nums) {
            cnt[n]++;
        }

        priority_queue<pair<int, int>> pq;
        for (auto& [num, count] : cnt) {
            pq.push({count, num});
        }

        vector<int> res;
        for (int i = 0; i < k; ++i) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
    }
};
