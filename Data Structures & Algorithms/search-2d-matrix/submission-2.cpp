class Solution {
public:
    bool searchMatrix(vector<vector<int>>& n, int t) {
        for (int i = 0; i < n.size(); ++i) {
            int l = 0, r = n[i].size() - 1;
            while (l <= r) {
                int m = l + (r - l) / 2;
                cout << n[i][m] << " ";
                if (n[i][m] == t) {
                    return true;
                }
                else if (n[i][m] < t) l = m + 1;
                else r = m - 1;
            }
        }

        return false;
    }
};
