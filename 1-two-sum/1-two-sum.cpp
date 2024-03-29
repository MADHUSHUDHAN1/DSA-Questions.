class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> ans;
        map<int,int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            int numberToFind = target - nums[i];
            
	    	if (mp.find(numberToFind) != mp.end()) {
                ans.push_back(i);		
                ans.push_back(mp[numberToFind]);
		      	return ans;
	    	  }

	      	mp[nums[i]] = i;
        }
        return ans;
    }
};