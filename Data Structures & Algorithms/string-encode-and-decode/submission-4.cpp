class Solution {
public:

    string encode(vector<string>& ss) {
        string res;
        for (int i = 0; i < ss.size(); ++i) {
            res += ss[i] + '-';
        }

        return res;
    }

    vector<string> decode(string s) {
        string ss;
        vector<string> res;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != '-') ss += s[i];
            else {
                res.push_back(ss);
                ss = "";
            }
        }

        return res;
    }
};
