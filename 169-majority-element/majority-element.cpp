class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el=0;
        int cnt=0;
        for(int x=0;x<nums.size();x++)
        {
            if(cnt==0)
            {
                el=nums[x];
                cnt=1;
            }
            else if(nums[x]==el)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        return el;
    }
};