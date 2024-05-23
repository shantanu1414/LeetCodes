class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int x=0;x<=nums.size()-1;x++)
        {
            cout<<nums.at(x);
        }
    }
};