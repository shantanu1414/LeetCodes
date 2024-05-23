class Solution {
    //Moores voting algorithm
public:
    int majorityElement(vector<int>& nums) {
        int c=0,e=0;
        for(auto n:nums)
        {
            if(c==0)
            {
                e=n;
            }
            if(e==n)c++;
            else c--;
        }
        return e;
    }
};