class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(nums.size(),0);
        
        vector<int> running;
        
        int curr=1;
        for(int i =1;i<n;i++)
        {
            running.push_back(curr);
            curr = curr*nums[i-1];
        }
        running.push_back(curr);
        curr = 1;
        
        for(int i =n-1;i>=0;i--)
        {
            res[i] = running[i]*curr;
            curr = curr*nums[i];
        }
        return res;
        
        
    }
};
