class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& a, int l,
                                                int r) {
        int n = a.size();
        vector<vector<int>> ans;
sort(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            int start = a[i][0];
            int end = a[i][1];

            while (i + 1 < n && end + 1 >= a[i + 1][0]) {
                end = max(end, a[i + 1][1]);
                i++;
            }

            ans.push_back({start, end});
        }

        int m = ans.size();
        vector<vector<int>> p;
        for (int i = 0; i < m; i++) {
            cout << ans[i][0] << " " << ans[i][1] << endl;
        }
        for (int i = 0; i < m; i++) {
            int x = ans[i][0], y = ans[i][1];
            if (x < l && y > r) {
                p.push_back({x, l - 1});
                p.push_back({r + 1, y});
            }

            else if (x >= l && y <= r) {
                continue;
            }

            else if (x >= l && x <= r) {
                p.push_back({r + 1, y});
            }

            else if (y >= l && y <= r) {
                p.push_back({x, l - 1});
            }

            else {
                p.push_back({x, y});
            }
        }

        return p;
    }
};