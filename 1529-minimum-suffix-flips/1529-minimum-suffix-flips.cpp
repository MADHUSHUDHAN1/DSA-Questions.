class Solution {
public:
    int minFlips(string target) {
        int count=0;
        char status = '0';
        for(int i=0; i<target.size(); i++)
        {
            if(status != target[i])
            {
                count++;
                status = status == '0'?'1':'0';
            }
        }
        return count;
    }
};