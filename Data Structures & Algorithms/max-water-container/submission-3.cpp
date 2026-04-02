class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0;
        int j = n-1;
        int ans = 0;
        while(i<j){
            int b = j-i;
            int h = min(heights[i],heights[j]);
            ans = max(ans,h*b);
            
            if(heights[i]<heights[j]){
              i++;
            }
            else{
            j--;
            }
            
        }
        return ans;
    }
};
