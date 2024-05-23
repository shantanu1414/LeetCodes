class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int x=0;x<=matrix.size()-1;x++)
        {
            if(target>=matrix[x][0] && target<=matrix[x][matrix[x].size()-1])
            {
                for(int y=0;y<=matrix[x].size()-1;y++)
                {
                    if(target==matrix[x][y])
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};