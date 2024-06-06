class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int col=matrix[0].size();
        int row=matrix.size();
        for(int x=0;x<row;x++)
        {
            for(int y=x+1;y<col;y++)
            {
                swap(matrix[x][y],matrix[y][x]);
            }
        }
        for(int x=0;x<row;x++)
        {
            reverse(matrix[x].begin(),matrix[x].end());
        }
    }
};