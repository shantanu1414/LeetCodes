class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int result=0;
        int n=grid[0].size();
        for(auto &row:grid)
        {
            int idx=upper_bound(begin(row),end(row),0,greater<int>())-begin(row);
            result+=(n-idx);
        }
        return result;
    }
};