class Solution {
public:
    int value(int r,int c)
        { 
            
            int val=1;
            for(int x=1;x<=c;x++)
            {
                val=val*(r-x+1)/x;
            }
            return val;
        }
    vector<vector<int>> generate(int numRows) {
        

        vector<vector<int>> pascal;
        for(int x=0;x<numRows;x++)
        {
            vector <int> temp;
            for(int y=0;y<=x;y++)
            {
                temp.push_back(value(x,y));
               
            }
            pascal.push_back(temp);
        }
        return pascal;
    }
};