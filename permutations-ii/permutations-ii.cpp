class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        
        permute(nums,0,ans);
        return ans;
    }
    
    void permute(vector<int> num, int i,vector<vector<int>> & ans)
    {
        if(i == num.size()-1)
        {
            ans.push_back(num);
        }
        else
        {
            for(int j=i; j<num.size();j++)
            {
                if(i!=j && num[i] == num[j])
                    continue;
                swap(num[i],num[j]);
                permute(num,i+1,ans);
            }
        }
    }
};