class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int child = 0, cookie = 0;
        int n = g.size(), m = s.size();

        while (child < n && cookie < m) {
            if (s[cookie] >= g[child]) {
                child++; // assign cookie to child
            }
            cookie++; // move to next cookie
        }
        return child;
    }
};
