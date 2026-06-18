class Solution {
public:
    int longestConsecutive(vector<int>& n) {
        if (n.empty()) return 0;
        int mx = 0;
        unordered_set<int> s;
        for (int i = 0; i < n.size(); ++i) s.insert(n[i]);
        for (int i = 0; i < n.size(); ++i) {
            if (!s.contains(n[i] - 1)) {
                int currNum = n[i];
                int cnt = 1;
                while (s.contains(currNum + 1)) {
                    currNum++;
                    cnt++;
                }
                mx = max(mx, cnt);
            }
        }

        return mx;
    }
};