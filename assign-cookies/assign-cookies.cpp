class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m = g.size();
        int n = s.size();

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i=0, j=0, ans=0;
        while(i<n && j<m){
            if(s[i] >= g[j]){
                ans++;
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};