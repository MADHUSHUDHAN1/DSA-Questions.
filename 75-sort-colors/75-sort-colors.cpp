class Solution {
public:
    void swap(int *x,int *y)
    {
        int temp= *x;
        *x = *y;
        *y = temp;
    }
    void sortColors(vector<int>& nums) {
        
        for(int i=0; i<nums.size()-1; i++)
        {
            int min_ind=i;
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[j]<nums[min_ind])
                    min_ind = j;
            }
            
            swap(&nums[i],&nums[min_ind]);
        }
    }
};