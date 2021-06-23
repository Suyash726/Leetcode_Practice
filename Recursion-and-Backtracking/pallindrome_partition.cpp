vector<vector <string>> res;

class Solution {
public:
    
    bool isPalindrome(string&str)
    {
        int i =0;int j =str.size()-1;
        
        while(i<=j)
        {
            if(str[i]!=str[j])
            {
                return false;
            }
            i++,j--;
        }
        return true;
    }
    
    void f(string&s,int start,int end,vector<string>curr)
    {
        // Base Case
        if(start>end)
        {
            res.push_back(curr);
            return;
        }
        
        
        // Recursive step
        string temp ="";
        for(int k=start;k<=end;k++)
        {
            
            vector<string> temp1 = curr;
            temp = s.substr(start,k-start+1);
            if(isPalindrome(temp))
            {
                temp1.push_back(temp);
                f(s,k+1,end,temp1);
            }
            
        }
    }
    
    vector<vector<string>> partition(string s) {
        res.clear();
        f(s,0,s.size()-1,{});
        return res;
    }
};
