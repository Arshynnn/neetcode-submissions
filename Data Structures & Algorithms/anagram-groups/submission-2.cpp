class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;

        for (auto& s : strs) {
            string k = s;
            sort(k.begin(), k.end());
            ans[k].push_back(s);
        }

        vector<vector<string>> res;
        res.reserve(ans.size());
        for (auto& [k, group] : ans) {
            res.push_back(move(group));
        }

        return res;
    }
};