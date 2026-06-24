class Solution {
public:
    using ppi = pair < int, pair < int, int >>;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        int m = points[0].size();
        // min heap
        priority_queue<ppi, vector<ppi>, greater<ppi>> minh;
        // int => pair<int,int>

        for (int i = 0; i < n; i++) {
            int x = points[i][0];
            int y = points[i][1];
            int dist = x * x + y * y;
            minh.push({dist, {x, y}});
        }
        vector<vector<int>> ans;

        while (k--) {
            auto x = minh.top();
            minh.pop();

            ans.push_back({x.second.first,x.second.second});
        }

        return ans;
    }
};