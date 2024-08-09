class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = n + m -2;
        int r = m-1;
        double res = 1.0;

        for(int x=1;x<=r;x++)
            res = res * (N-r+x)/x;

            return (int)res;
    }
};