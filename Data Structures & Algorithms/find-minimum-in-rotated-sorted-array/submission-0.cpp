class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int ans = nums[0];
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid]>=nums[i]){
                ans = min(ans,nums[i]);
                i=mid+1;
            }
            else{
                ans = min(nums[mid],ans);
                j=mid-1;
            }
        }
        return ans;
    }
};
