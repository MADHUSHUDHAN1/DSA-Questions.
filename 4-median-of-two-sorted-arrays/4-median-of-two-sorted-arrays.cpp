class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> ans;
        
        int n = nums1.size();
        int m = nums2.size();
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(nums1[i]<=nums2[j])
            {
                ans.push_back(nums1[i++]);
            }
            else{
                ans.push_back(nums2[j++]);
            }
        }
        while(i<n)
        {
            ans.push_back(nums1[i++]);
            
        }
        while(j<m)
        {
            ans.push_back(nums2[j++]);
        }
        double res =0;
         int k = ans.size();
        if(k%2==0)
        {
           
            res = (ans[k/2-1]+ans[k/2])/2;
        }
        else{
            
            res = ans[k/2];
        }
        return res;
    }
};