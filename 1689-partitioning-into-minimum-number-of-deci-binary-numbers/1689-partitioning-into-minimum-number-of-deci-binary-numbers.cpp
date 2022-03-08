class Solution {
public:
    int minPartitions(string n) {
        
        int num = INT_MIN;
        for(int i=0; i<n.size(); i++)
        {
            int el = n[i]-'0';
            num = max(num,el);
        }
        return num;
    }
};