class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0;
        stack<int> s;
        for(int x: pushed)
        {
            s.push(x);
            while(!s.empty() && s.top() == popped[i])
            {
                s.pop();
                i++;
            }
        }
        if(s.empty())
            return true;
        else
            return false;
    }
};