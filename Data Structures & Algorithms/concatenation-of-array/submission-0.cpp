class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int n = 2 * nums.size();
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {

            if (i >= n / 2) {
                ans[i] = nums[i - n / 2];
            }
            else {
                ans[i] = nums[i];
            }

        }

        return ans;
    }
};