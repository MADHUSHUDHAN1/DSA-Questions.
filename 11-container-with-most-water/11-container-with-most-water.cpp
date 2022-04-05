class Solution {
public:
    int maxArea(vector<int>& height) {
       int i=0;
        int j=height.size()-1;
        int maxArea = 0;
        while(i<j)
        {
            
            int minh = min(height[i],height[j]);
            int area = minh*(j-i);
            maxArea = max(maxArea,area);
            while(height[i]<=minh && i<j)
                i++;
            while(height[j]<=minh && i<j)
                j--;
        }
        return maxArea;
    }
};