class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(), piles.end());
        while (l < r) {
            int m = (l + r) / 2;
            if (eat(piles, m) > h) l = m + 1;
            else r = m;
        }

        return l;
    }

    int eat(vector<int>& piles, int h) {
        int res = 0;
        for (int i = 0; i < piles.size(); ++i) {
            res += (piles[i] + h - 1) / h;
        }

        return res;
    }
};
