class Solution {
public:
    int reverse(int x) {
        long long int n=0;
        while(x!=0)
        {
            int d=x%10;
            n=n*10+d;
            x=x/10;
        }
        if(n<pow(-2,31) || n>(pow(2,31)-1))
        {
            return 0;
        }
        else
        {
            return n;
        }
        return n;
    }
};