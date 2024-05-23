class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> v;
        for(int x=0;x<=nums.size()-1;x++)
        {
            v.push_back(nums.at(nums.at(x)));
        }
        return v;
    }
};