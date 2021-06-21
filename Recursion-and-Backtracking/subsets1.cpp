vector<vector<int>> res;

class Solution {
public:
    
    void f(vector<int> &arr,int start,int end,vector<int> curr)
    {
        
        // Base case
        if(start>end)
        {
            res.push_back(curr);
            return;
        }
        
        // DO not include arr[s]
        f(arr,start+1,end,curr);
        
        // Include arr[s]
        curr.push_back(arr[start]);
        f(arr,start+1,end,curr);
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        res.clear();
        
        f(nums,0,nums.size()-1,{});
        
        return res;
        
    }
};
