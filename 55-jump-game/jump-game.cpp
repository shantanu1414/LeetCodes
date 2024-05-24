class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reachable=0;
        for(int x=0;x<nums.size();x++)
        {
            if(reachable<x)
            {
                return false;
            }
            reachable=max(reachable,x+nums[x]);
        }
        return true;
    }
};