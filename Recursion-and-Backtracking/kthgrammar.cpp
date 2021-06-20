class Solution {
public:
    int kthGrammar(int n, int k) {
        
        // Base case
        if(n ==1 && k ==1)
            return 0;
        
        int mid = pow(2,n-2);
        
        if(k<=mid)
            return kthGrammar(n-1,k);
        
        return !kthGrammar(n-1,k-mid);
        
    }
};
