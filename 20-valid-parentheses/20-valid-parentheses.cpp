class Solution {
public:
    bool isValid(string s) {
      stack<int> st;
        int n = s.size();
        
        for(int i=0; i<n; i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else if(s[i] == ')')
            {
                if(!st.empty() && st.top() == '(')
                {
                    st.pop();
                }
                else return false;
            }
            else if(s[i] == ']')
            {
                if(!st.empty() && st.top() == '[')
                {
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i] == '}')
            {
                if(!st.empty() && st.top() == '{')
                {
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.size()>0) return false;
        return true;
    }
};