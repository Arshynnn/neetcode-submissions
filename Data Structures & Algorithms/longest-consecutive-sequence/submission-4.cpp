class Solution {
public:
    int longestConsecutive(vector<int>& n) {
        if (n.empty()) return 0;

        int mx = 0, cnt = 1;
        set<int> s(n.begin(), n.end());
        vector<int> v(s.begin(), s.end());
        
        for (int i = 0; i < v.size() - 1; ++i) {
            if (v[i] == v[i + 1] - 1) cnt++;
            else {
                mx = max(mx, cnt);
                cnt = 1;
            }
        }

        return max(mx, cnt);
    }
};