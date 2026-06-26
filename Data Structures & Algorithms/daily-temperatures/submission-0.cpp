class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> res;
        for (int i = 0; i < t.size(); ++i) {
            int j = i, k = 0;
            while (j < t.size()) {
                if (t[i] < t[j]) {
                    k = j - i;
                    break;
                }
                j++;
            }

            res.push_back(k);
        }

        return res;
    }
};
