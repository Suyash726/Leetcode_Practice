vector<vector<int>> res;
class Solution {
public:
    void f(int start,int end,int k,vector<int> curr)
    {
        // Base Case
        if(k ==0)
            {res.push_back(curr);
            return;}
        else if(start>end)
            {return;}
        else if(k>end-start+1)
            {return;}
        // Recursive Step
        // Do not include
        f(start+1,end,k,curr);
        // Include
        curr.push_back(start);
        f(start+1,end,k-1,curr);
    }
    
    vector<vector<int>> combine(int n, int k) {
        res.clear();
        f(1,n,k,{});
        return res;
    }
};
