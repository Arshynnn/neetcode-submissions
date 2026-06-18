class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        int l = 0, r = n.size() - 1;
        while (l <= r) {
            if (n[l] + n[r] < t) l++;
            else if (n[l] + n[r] > t) r--;
            else return {l + 1, r + 1};
        }
    }
};
