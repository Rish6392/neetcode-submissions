class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> ans;

        for (auto &it : nums1) {
            ans.push_back(it);
        }

        for (auto &it : nums2) {
            ans.push_back(it);
        }

        sort(ans.begin(), ans.end());

        int x = ans.size();

        if (x % 2 == 0) {
            return (ans[x/2] + ans[x/2 - 1]) / 2.0;
        }
        else {
            return ans[x/2];
        }

    }
};
