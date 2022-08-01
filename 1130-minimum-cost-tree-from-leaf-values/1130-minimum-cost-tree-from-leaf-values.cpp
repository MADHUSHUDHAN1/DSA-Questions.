class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        int res = 0;
        vector<int> st ={INT_MAX};
        for(auto it: arr)
        {
            while(st.back() <= it)
            {
                int mid = st.back();
                st.pop_back();
                res += mid * min(st.back(),it);
            }
            st.push_back(it);
        }
        for(int i=2; i<st.size(); i++)
        {
            res += st[i]*st[i-1];
        }
        return res;
    }
};