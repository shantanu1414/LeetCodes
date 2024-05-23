class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int x=0;x<nums.size()-1;x+=2)
         {swap(nums[x],nums[x+1]);
         }
         return nums;
    }
};