class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
         int n = stones.size();
        //max heap
        priority_queue<int>maxh;
        maxh.push(stones[0]);

        for(int i=1;i<n;i++){
           maxh.push(stones[i]);
        }

        while(maxh.size()!=1){
            int top = maxh.top();
            maxh.pop();
            int bottom = maxh.top();
            maxh.pop();

            int x = abs(top-bottom);
            maxh.push(x);
        }

        return maxh.top();
    
    }
};
