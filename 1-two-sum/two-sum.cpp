class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        vector<int> result;
        for(int x=0;x<nums.size();x++)
        {
            if(mpp.find(target-nums[x]) != mpp.end())
            {
                result.push_back(mpp[target - nums[x]]);
                result.push_back(x);
                return result;
            }
            mpp[nums[x]]=x;
        }
        return result;
    }
};