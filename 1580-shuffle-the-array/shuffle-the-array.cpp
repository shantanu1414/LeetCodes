class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v;
        // vector<int> v::iterator it;
        for(int x=0;x<=n-1;x++)
        {
            v.push_back(nums.at(x));
            v.push_back(nums.at(x+(n)));
        }
        return v;
    }
};