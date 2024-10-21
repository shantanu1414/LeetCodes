class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m =0;
        int c=0;
        for(int x=0;x<nums.size();x++)
        {
            if(nums[x]==1)
            {
                c++;
                m = max(m,c);
            }
            else
            {
                c=0;
            }
        }
        return m;
    }
};