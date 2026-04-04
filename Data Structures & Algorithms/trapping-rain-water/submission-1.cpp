class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n==0){
            return 0;
        }

        int i = 0;
        int j = n-1;
        int left_max = height[i];
        int right_max = height[j];
        int ans =0;
        while(i<j){
              if(left_max<right_max){
                i++;
                left_max = max(left_max,height[i]);
                ans+=left_max-height[i];
              }   
              else{
                j--;
                right_max = max(right_max,height[j]);
                ans+=right_max-height[j];
              }   
        }
        return ans;
    }
};
