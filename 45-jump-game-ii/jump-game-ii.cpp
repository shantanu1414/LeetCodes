class Solution {
public:
    int jump(vector<int>& nums) {
        int destination = nums.size()-1;
        int coverage=0;
        int lastjumpindex=0,totaljumps=0;

        if(nums.size()==1) return 0;

        for(int x=0;x<nums.size();x++)
        {
            coverage = max(coverage,x+nums[x]);

            if(x==lastjumpindex)
            {
                lastjumpindex=coverage;
                totaljumps++;

                if(coverage>=destination)
                    return totaljumps;
            }
        }
        return totaljumps;
    }
};