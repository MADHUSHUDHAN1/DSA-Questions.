class Solution {
public:
    int minSwap(string ans, string num)
    {
        int n = ans.size();
        int i=0,j=0;
        int res = 0;
        while(i<n)
        {
            j=i;
            while(ans[i] != num[j]) j++;
            
            while(i<j)
            {
                swap(num[j],num[j-1]);
                j--;
                res++;
            }
            i++;
        }
        return res;
    }
    int getMinSwaps(string num, int k) {
        
        string ans = num;
        int i=0; 
        while(i<k)
        {
            next_permutation(num.begin(),num.end());
            i++;
        }
        return minSwap(ans,num);
    }
};