class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> k;
        int l = 0, mx = 0;

        for (int i = 0; i < s.size(); ++i) {
            while (k.count(s[i])) {
                k.erase(s[l]);
                l++;
            }
            k.insert(s[i]);
            mx = max(mx, i - l + 1);
        }

        return mx;
    }
};
