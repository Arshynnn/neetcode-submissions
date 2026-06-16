class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0, r = matrix[0].size(), j = 0;
        for (int i = 0; i < matrix.size(); ++i) {
            if (matrix[i][0] <= target && matrix[i][matrix[i].size() - 1] >= target) {
                j = i;
                break;
            }
        }

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (matrix[j][mid] == target) return true;

            if (matrix[j][mid] < target) l = mid + 1;
            else r = mid - 1;
        }

        return false;
    }
};
