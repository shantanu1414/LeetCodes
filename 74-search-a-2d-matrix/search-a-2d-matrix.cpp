class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int x=0;x<m;x++)
        {

            int left = 0;
            int right = n-1;

            while(left<=right)
            {
                int mid = left + (right - left) / 2;
                if(matrix[x][mid] == target)  return true;

                else if(target < matrix[x][mid]) right = mid-1;
                
                else left = mid+1;
                
            }

            // if(target>=matrix[x][0] && target<=matrix[x][n-1])
            // {
            //     for(int y=0;y<n;y++)
            //     {
            //         if(target == matrix[x][y])
            //         {
            //             return true;
            //         }
            //     }
            // }
        }
        return false;
    }
};