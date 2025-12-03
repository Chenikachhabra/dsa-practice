#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin() , g.end());
        sort(s.begin() , s.end());
        int i =0;
        int j=0;
        int n = g.size();
        int m = s.size();
        while(i<n && j < m){
            if(s[j] >= g[i]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return i;
    }
};
int main() {
    int n, m;
    cin >> n;              
    vector<int> g(n);
    for(int i = 0; i < n; i++) cin >> g[i];

    cin >> m;              
    vector<int> s(m);
    for(int i = 0; i < m; i++) cin >> s[i];

    Solution obj;
    int ans = obj.findContentChildren(g, s);
    
    cout << ans << endl;
    return 0;
}