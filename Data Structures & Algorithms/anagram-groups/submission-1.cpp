class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string, vector<string>>> v;

        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            string str = s;
            sort(str.begin(), str.end());

            bool found = false;

            for (int j = 0; j < v.size(); j++) {
                if (v[j].first == str) {
                    v[j].second.push_back(s);
                    found = true;
                    break;
                }
            }

            if (!found) {
                v.push_back({str, {s}});
            }
        }

        vector<vector<string>> res;
        for (int i = 0; i < v.size(); i++) {
            res.push_back(v[i].second);
        }

        return res;
    }
};