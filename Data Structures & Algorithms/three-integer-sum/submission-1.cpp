class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        sort(n.begin(), n.end());
        set<vector<int>> ans;
        for (int i = 0; i < n.size(); ++i) {
            for (int j = i + 1; j < n.size(); ++j) {
                for (int k = j + 1; k < n.size(); ++k) {
                    if (n[i] + n[j] + n[k] == 0) {
                        ans.insert({ n[i], n[j], n[k] });
                    }
                }
            }
        }

        vector<vector<int>> res(ans.begin(), ans.end());
        return res;
    }
};
