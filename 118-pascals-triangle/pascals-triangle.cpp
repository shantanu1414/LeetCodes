class Solution {
public:
    // int value(int r,int c)
    //     { 
            
    //         int val=1;
    //         for(int x=1;x<=c;x++)
    //         {
    //             val=val*(r-x+1)/x;
    //         }
    //         cout<<val;
    //         return val;
    //     }

    vector<int> generaterow(int row)
    {
        long long ans=1;
        vector<int> rowans;
        rowans.push_back(1);
        for(int col=1;col<row;col++)
        {
            ans=ans*(row-col);
            ans=ans/col;
            rowans.push_back(ans);
        }
        return rowans;
    }
    vector<vector<int>> generate(int numRows) {
        

        vector<vector<int>> pascal;
        for(int x=1;x<=numRows;x++)
        {
            // vector <int> temp;
            // int ans=1;
            // temp.push_back(ans);
            // for(int y=1;y<x;y++)
            // {
            //     ans*=(x-y)/(y);
            //     temp.push_back(ans);
               
            // }
            pascal.push_back(generaterow(x));
        }
        return pascal;
    }
};