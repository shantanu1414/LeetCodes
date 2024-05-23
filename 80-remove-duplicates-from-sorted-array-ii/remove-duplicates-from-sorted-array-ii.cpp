class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c=0;
        for(int x=0;x<nums.size();x++)
        {
            
            if(c<2 || nums[x]!=nums[c-2] )
            {
                
                nums[c++]=nums[x];
                
            }
            
        }
        
        return c;
    }
};