class Solution {
public:
    typedef pair<int,int> P;

     int binarySearch(vector<int> &arr,int l,int r)
        {
            int result=-1;
            int mid;
            while(l<=r)
            {
                mid=l+(r-l)/2;
                if(arr[mid]==1)
                {
                    result=mid;
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
            return result;
        }

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        
        priority_queue<P> pq;//max-heap



        for(int row=0;row<m;row++)
        {
            int num_of_ones=binarySearch(mat[row],0,n-1);
            pq.push({num_of_ones,row});
            if(pq.size()>k)
                 pq.pop();
        }
        
        vector<int> result(k);
        int j=k-1;
        while(!pq.empty()){
            P temp = pq.top();
            pq.pop();
            result[j--]=temp.second;
        }

        return result;
    }
};