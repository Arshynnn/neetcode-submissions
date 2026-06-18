class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        sort(n.begin(), n.end());
        set<vector<int>> ans;
        for (int i = 0; i < n.size(); ++i) {
            int l = i + 1, r = n.size() - 1;
            while (l < r) {
                if (n[i] + n[l] + n[r] > 0) r--;
                else if (n[i] + n[l] + n[r] < 0) l++;
                else {
                    ans.insert({ n[i], n[l], n[r] });
                    r--;
                    continue;
                }
            }
        }

        return vector<vector<int>> (ans.begin(), ans.end());
    }
};
