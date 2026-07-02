class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0, j = 1; j < n; i++, j++){
            if ((nums[i] ^ nums[j]) == 0){
                return true ;
            }
        }
        return false;
    }
};