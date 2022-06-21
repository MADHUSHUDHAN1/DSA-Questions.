class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n = plants.size();
       int steps =1;
        int c = capacity;
        for(int i=1; i<n; i++)
        {
            if(capacity - plants[i-1] >= plants[i])
            {
                steps += 1;
                capacity -= plants[i-1];
            }
            else{
                steps += i+i+1;
                capacity = c;
            }
        }
        return steps;
    }
};