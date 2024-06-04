class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=INT_MIN;
        for(int x=0;x<nums.size();x++)
        {
            sum+=nums[x];
            if(sum>maxi)
            {
                maxi=sum;
            }
            if(sum<0) sum=0;
        }
        return maxi;
    }
};