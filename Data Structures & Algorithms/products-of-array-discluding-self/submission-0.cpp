class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int product=1;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
            product*=nums[i];
            }
        }

        int cnt=0;

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cnt++;
            }
        }
        vector<int>ans;
        
        if(cnt==0){
            for(int i=0;i<n;i++){
                ans.push_back(product/nums[i]);
            }
        }
        else if(cnt==1){
            for(int i=0;i<n;i++){
                if(nums[i]==0){
                    ans.push_back(product);
                }
                else{
                    ans.push_back(0);
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                ans.push_back(0);
            }
        }
        return ans;
    }
};
