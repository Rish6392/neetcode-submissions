class Solution {
public:
    bool can_eat_all(vector<int>& piles, int mid,int h){
        int total_hours = 0;
        for(auto &x:piles){
            total_hours+=(x/mid);
            if((x%mid)!=0){
                total_hours++;
            }
        }

        return total_hours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
         int n = piles.size();
        int l = 1;
        int r = *max_element(piles.begin(),piles.end());

        while(l<r){
            int mid = l+(r-l)/2;
            if(can_eat_all(piles,mid,h)){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
        
    }
};
