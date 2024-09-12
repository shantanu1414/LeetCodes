class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int currentcount=1;
        
        int maxcount=1;
        sort(nums.begin(),nums.end());
        if(nums.size() == 0) return 0;
        for(int x=1;x<nums.size();x++)
        {
            if(nums[x-1] == nums[x])
            {
                continue;
            }
            else if(nums[x] == nums[x-1]+1)
            {
                currentcount++;
            }
            else
            {
                currentcount=1;
            }
            maxcount = max(maxcount,currentcount);
        }
        return maxcount;
    }
};