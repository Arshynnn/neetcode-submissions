class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> cnt(26, 0);
        int n = 0, f = 0, l = 0;

        for (int i = 0; i < s.size(); ++i) {
            cnt[s[i] - 'A']++;
            f = max(f, cnt[s[i] - 'A']);
            while ((i - n + 1) - f > k) {
                cnt[s[n] - 'A']--;
                n++;
            }

            l = max(l, i - n + 1);
        }

        return l;
    }
};
