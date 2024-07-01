class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = 0;
        
        while (i >= 0 && j < n) {
            if (nums1[i] > nums2[j]) {
                swap(nums1[i], nums2[j]);
                i--;
                j++;
            } else {
                break;
            }
        }
        
        // Sort nums1 and nums2 after swapping
        sort(nums1.begin(), nums1.begin() + m);
        sort(nums2.begin(), nums2.end());
        
        // Merge nums2 into nums1
        for (int k = 0; k < n; k++) {
            nums1[m + k] = nums2[k];
        }
    }
};
