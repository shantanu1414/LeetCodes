class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        int smaller=INT_MIN;
        int longest=1;
        int currentCount=0;
        for(int x=0;x<nums.size();x++)
        {
            if(nums[x]-1 == smaller)
            {
                smaller=nums[x];
                currentCount += 1; 
            }
            else if(nums[x] != smaller)
            {
                smaller = nums[x];
                currentCount = 1;
            }
            longest = max(longest,currentCount);
        }
        return longest;
    }
};