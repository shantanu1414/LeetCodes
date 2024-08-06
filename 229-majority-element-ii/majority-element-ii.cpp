class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        int el1 = INT_MIN;
        int el2 = INT_MIN;
        vector<int> result;
        for(int x=0;x<nums.size();x++)
        {
            if(cnt1==0 && el2!=nums[x])
            {
                el1=nums[x];
                cnt1=1;
            }
            else if(cnt2==0 && el1!=nums[x])
            {
                el2=nums[x];
                cnt2=1;
            }
            else if(el1==nums[x]) cnt1++;
            else if(el2==nums[x]) cnt2++;
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0,cnt2=0;
        for(int x=0;x<nums.size();x++)
        {
            if(el1==nums[x])cnt1++;
            else if(el2==nums[x]) cnt2++;
        }
        if(cnt1>nums.size()/3) result.push_back(el1);
        if(cnt2>nums.size()/3) result.push_back(el2);

        return result;
    }
};