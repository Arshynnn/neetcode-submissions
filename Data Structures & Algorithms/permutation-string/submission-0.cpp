class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        vector<int> n(26, 0), m(26, 0);

        for (int i = 0; i < s1.size(); ++i) {
            n[s1[i] - 'a']++;
            m[s2[i] - 'a']++;
        }

        for (int i = s1.size(); i < s2.size(); ++i) {
            if (n == m) return true;

            m[s2[i] - 'a']++;
            m[s2[i - s1.size()] - 'a']--;
        }

        return n == m;
    }
};
