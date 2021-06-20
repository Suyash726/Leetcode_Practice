vector<vector<int>> res;

class Solution {
public:
    
    void f(vector<int> A,int start,int end,int target,vector<int> curr_sum)
    {
        // Base case (start > end) and (target<0)
        if(target==0){res.push_back(curr_sum);return;}
        if(start>end && target>0){return;}
        if(target<0){return;}
        // Recursive step Include or Exclude the starting element
        // Do not include
        f(A,start+1,end,target,curr_sum);
            
        // Include
        curr_sum.push_back(A[start]);
        f(A,start,end,target-A[start],curr_sum);
        
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        res.clear();
        f(candidates,0,candidates.size()-1,target,{});
        return res;
    }
};
