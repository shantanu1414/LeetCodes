class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        if(nums.size()==0) return 0;
        int longest=1;

        for(int x=0;x<nums.size();x++)
        {
            st.insert(nums[x]);
        }

        for(auto it: st)
        {
            if(st.find(it - 1) == st.end())
            {
                int cnt = 1;
                int x=it;
                while(st.find(x+1) != st.end())
                {
                    cnt++;
                    x=x+1;
                }
                longest = max(longest,cnt);
            }
       }
        return longest;
    }
};