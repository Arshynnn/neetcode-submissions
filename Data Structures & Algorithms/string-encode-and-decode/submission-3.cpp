class Solution {
public:
    char c = '\xC3';

    string encode(vector<string>& strs) {
        string s;
        for (int i = 0; i < strs.size(); ++i) {
            s += strs[i] + c;
        }

        return s;
    }

    vector<string> decode(string s) {
        string k;
        vector<string> res;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != c) {
                k += s[i];
            } else {
                res.push_back(k);
                k = "";
            }
        }

        return res;
    }
};
