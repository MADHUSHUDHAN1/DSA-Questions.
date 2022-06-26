class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        int ans = 0;
        int i=0;
        int j=piles.size()-1;
        sort(piles.begin(),piles.end());
        while(i<j)
        {
            ans += piles[j-1];
            j -=2;
            i++;
        }
        return ans;
    }
};