class Solution {
public:
    void combination(vector<vector<int>> &result,vector<int> &output, int k, int n)
    {
        if(output.size()==k && n == 0)
        {
            result.push_back(output);
            return;
        }
        if(output.size()<k){
          for(int i=output.empty()? 1:output.back()+1; i<=9; i++)
          {
              if(n-i <0)
                  break;
              output.push_back(i);
              combination(result,output,k,n-i);
              output.pop_back();
          }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> output;
        combination(result,output,k,n);
        return result;
    }
};