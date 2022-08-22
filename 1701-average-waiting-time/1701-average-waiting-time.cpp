class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        
        int n = customers.size();
        double totalTime = 0;
        totalTime = customers[0][0]+customers[0][1];
        double waitTime = totalTime - customers[0][0]; 
        for(int i=1; i<n; i++)
        {
            if(customers[i][0] <= totalTime)
            {
                totalTime += customers[i][1];
                waitTime += totalTime - customers[i][0];
            }
            else{
                totalTime = customers[i][0]+customers[i][1];
                waitTime += totalTime - customers[i][0];
            }
        }
        double avg_time = waitTime/n;
        return avg_time;
    }
};