class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        int n = strs.size();
        
        unordered_map<string,vector<string>>mp;

        for(auto it:strs){
            string key = it;
            sort(key.begin(),key.end());
            mp[key].push_back(it);
        }

        for(auto it:mp){
            ans.push_back(it.second);
        }

        

        return ans;
    }
};
