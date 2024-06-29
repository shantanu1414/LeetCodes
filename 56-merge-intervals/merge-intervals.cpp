class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int size=intervals.size();
        ans.push_back({intervals[0]});
        int i=0;
        for(int x=1;x<size;x++)
        {
            if(intervals[x][0]<=ans[i][1])
            {
                ans[i][1] =  max(intervals[x][1],ans[i][1]);//intervals[x][1]; 
            }
            else
            {
                ans.push_back(intervals[x]);
                i++;
            }
        }
        return ans;
    }
};