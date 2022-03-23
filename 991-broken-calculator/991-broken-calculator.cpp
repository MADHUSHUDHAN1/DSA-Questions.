class Solution {
public:
    int brokenCalc(int startValue, int target) {
       int cnt =0;
        if(target <= startValue)
        {
            return startValue-target;
        }
        else {
            while(target > startValue)
            {
                if(target%2 == 0)
                {
                    target /=2;
                    cnt++;
                }
                else {
                    target +=1;
                    cnt++;
                }
            }
            cnt += startValue-target;
        }
        return cnt;
    }
};