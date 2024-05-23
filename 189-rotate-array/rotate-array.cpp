class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l=0,r=nums.size()-1;
        k=k%nums.size();
        while(l<r )
        {
            int t=nums[l];
            nums[l]=nums[r];
            nums[r]=t;
            l++;
            r--;
        }
        
        l=0,r=k-1;
        while(l<r )
        {
            int t=nums[l];
            nums[l]=nums[r];
            nums[r]=t;
            l++;
            r--;
        }
        
        l=k,r=nums.size()-1;
        while(l<r  )
        {
            int t=nums[l];
            nums[l]=nums[r];
            nums[r]=t;
            l++;
            r--;
        }
        
    }
};