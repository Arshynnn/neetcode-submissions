class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0, mx = 0;
        unordered_set<char> k;

        while (r < s.size()) {
            while (k.contains(s[r])) {
                k.erase(s[l]);
                l++;
            }

            k.insert(s[r]);
            mx = max(mx, r - l + 1);
            r++;
        }

        return mx;
    }
};
