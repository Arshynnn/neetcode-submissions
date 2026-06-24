class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {
        int sum = 1, z = 0;
        for (int i: n) {
            if (i != 0) sum *= i;
            else z++;
        }
        
        vector<int> res;
        for (int i: n) {
            if (z > 1) {
                res.push_back(0);
            } else if (z == 1) {
                if (i == 0) res.push_back(sum);
                else res.push_back(0);
            } else {
                res.push_back(sum / i);
            }
        }

        return res;
    }
};
