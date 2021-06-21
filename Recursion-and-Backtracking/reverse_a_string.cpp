class Solution {
public:
    
    void f(vector<char> &s,int start,int end)
    {
        if(start>=end)
            {return;}
        char temp = s[start];
        s[start++] = s[end];
        s[end--] = temp;
        f(s,start,end);
    }
    
    
    void reverseString(vector<char>& s) {
        f(s,0,s.size()-1);    
    }
};
