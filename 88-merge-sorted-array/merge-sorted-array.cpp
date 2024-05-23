class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l1=m-1,l2=n-1,p=(n+m)-1,t=p;
       while(l1>=0&&l2>=0)
       {
           if(nums1[l1]>=nums2[l2])
            {
                nums1[p--]=nums1[l1--];
            }
            else
            {
                nums1[p--]=nums2[l2--];
            }
       }
       while(l1>=0)
       {
           nums1[p--]=nums1[l1--];
       }
       while(l2>=0)
       {
           nums1[p--]=nums2[l2--];
       }
        for(int x=0;x<=t;x++)
        {
            cout<<nums1[x]<<" ";
        }
    }
};