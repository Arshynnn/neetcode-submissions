class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        for (int i : nums) m[i]++;

        vector<pair<int, int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), [](const auto &a, const auto &b) {
            return a.second < b.second;
        });

        vector<int> res;
        while (k > 0) {
            res.push_back(v.back().first);
            v.pop_back();
            k--;
        }

        return res;
    }
};
