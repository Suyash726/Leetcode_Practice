vector<string> res;

class Solution {
public:
    
    void letterCase(string input,string output)
    {
        if(input.size()==0)
        {
            res.push_back(output);
            return;
        }
        
        if(isdigit(input[0]))
            {output.push_back(input[0]);
            letterCase(input.substr(1),output);}
        else{
            string op1 = output;
            op1.push_back((tolower(input[0])));
            string op2 = output;
            op2.push_back((toupper(input[0])));
            letterCase(input.substr(1),op1);
            letterCase(input.substr(1),op2);

        }
        }
    
    
    vector<string> letterCasePermutation(string s) {
        res.clear();
        letterCase(s,"");
        
        return res;
    }
};
