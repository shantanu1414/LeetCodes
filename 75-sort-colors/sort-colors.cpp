class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count(3,0);
        int size=nums.size();
        for(int x=0;x<size;x++)
        {
            count[nums[x]]++;
        }
        int index=0;
        for(int x=0;x<3;x++)
        {
            while(count[x]--)
            {
                nums[index++]=x;
            }
        }
        // for(int x=0;x<3;x++)
        // {
        //     cout<<count[x];
        // }
    }
};