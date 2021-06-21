class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p =0;
        
        vector<int> res(nums.size(),0);
        int i =0;
        while(p<nums.size())
        {
            if(nums[p]!=0)
            {
                res[i]= nums[p];
                i++;
            }
            p++;
                
        }
        
        for(int i =0;i<nums.size();i++)
        {
            nums[i]=res[i];
        }
    }
};
