class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;  // val->index
        int n = nums.size();

        for(int i=0;i<n;i++){
            mp[nums[i]] = i;
        }

        for(int i=0;i<n;i++){
            int diff = target - nums[i];
            if(mp.count(diff) && mp[diff]!=i){
                return {i,mp[diff]};
            }
        }
        return {};
    }
};
