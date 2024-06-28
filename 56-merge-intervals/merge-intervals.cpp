class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        // Sort the intervals by their starting times
        sort(intervals.begin(), intervals.end());
        int size = intervals.size();
        int first, second;
        vector<vector<int>> newarr;
        
        for (int x = 0; x < size; ++x) {
            first = intervals[x][0];
            second = intervals[x][1];
            
            for (int y = x + 1; y < size; ++y) {
                if (intervals[y][0] <= second) {
                    // Update second to the maximum end value of overlapping intervals
                    second = max(second, intervals[y][1]);
                    x = y; // Move x to the last merged interval
                } else {
                    break;
                }
            }
            newarr.push_back({first, second});
        }
        
        return newarr;
    }
};
