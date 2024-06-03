class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int bp = -1;
        int size = nums.size();
        for (int x = size - 1; x >= 1; x--) {
            if (nums[x] > nums[x - 1]) {
                bp = x - 1;
                break;
            }
        }
        if (bp == -1) {
            reverse(nums.begin(), nums.end());
        }

        else {
            for (int x = size - 1; x >= 0; x--) {
                if (nums[x] > nums[bp]) {
                    int t = nums[x];
                    nums[x] = nums[bp];
                    nums[bp] = t;
                    break;
                }
            }
            reverse(nums.begin() + bp + 1, nums.end());
        }
    }
};