class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        unordered_map<string,vector<string>>mp;

        for(auto s:strs){
            vector<int>freq(26,0);
            for(auto ch:s){
                freq[ch-'a']++;
            }

            string key = "";
            for(auto it:freq){
                key+=to_string(it)+"#";
            }
            mp[key].push_back(s);
        }
        
        vector<vector<string>> ans;
        for(auto &it : mp){
            ans.push_back(it.second);
        }

        return ans;
    }
};
