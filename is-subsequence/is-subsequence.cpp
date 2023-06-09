class Solution {
public:
    bool solve(string s, string t, int m, int n){
        if(m == 0){
            return true;
        }

        if(n == 0){
            return false;
        }

        if(s[m-1] == t[n-1]){
            return solve(s, t, m-1, n-1);
        }
        else{
            return solve(s, t, m, n-1);
        }  
        
    }
    bool isSubsequence(string s, string t) {

        int m = s.size();
        int n = t.size();
        
        return solve(s, t, m, n);
    }
};
