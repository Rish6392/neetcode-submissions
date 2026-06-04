class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        int m = t.length();

        unordered_map<char, int> freq;
        unordered_map<char, int> window;
        for (auto it : t) {
            freq[it]++;
        }

        int required = freq.size();
        int formed = 0;

        int left = 0;
        int right = 0;
        int minlen = INT_MAX;
        int start = 0;

        while (right <= s.size()) {
            char c = s[right];
            window[c]++;

            if (freq.count(c) && window[c] == freq[c]) {
                formed++;
            }

            // try shrinking
            while (left <= right && formed == required) {
                if (right - left + 1 < minlen) {
                    minlen = right - left + 1;
                    start = left;
                }

                char d = s[left];
                window[d]--;
                if (freq.count(d) && window[d] < freq[d]) {
                    formed--;
                }
                left++;
            }
            right++;
        }

        return minlen==INT_MAX?"":s.substr(start,minlen);
    }
};
