class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0;
        int l = 0, r = height.size() - 1;

        while (l < r) {
            if (height[l] < height[r]) {
                int ll = l + 1;
                while (ll < r && height[l] >= height[ll]) {
                    water += height[l] - height[ll];
                    ll++;
                }
                l = ll;
            } else {
                int rr = r - 1;
                while (rr > l && height[r] >= height[rr]) {
                    water += height[r] - height[rr];
                    rr--;
                }
                r = rr;
            }
        }

        return water;
    }
};
