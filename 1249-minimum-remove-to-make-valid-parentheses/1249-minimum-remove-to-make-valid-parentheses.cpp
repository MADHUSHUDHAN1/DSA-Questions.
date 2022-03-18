class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> st;
        string ans ="";
        int countl=0, countr = 0;
        for(char c: s)
        {
            if(c == '(')
                countl++;
            else if(c == ')')
                countr++;
                
        }
        for(char c: s)
        {
            if(c == '(' && countr>0)
            {
                st.push(c);
                countr--;
                ans+=c;
                
            }
            else if(c == ')' && !st.empty())
            {
                st.pop();
                ans+=c;
            }
             else if(c == ')' && st.empty())
            {
                 countr--;
                continue;
                 
            }
            else if(c != '(' && c != ')' ){
                ans+=c;
            }
        }
        return ans;
    }
};