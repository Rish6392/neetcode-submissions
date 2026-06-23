class KthLargest {
    int kth;
    priority_queue<int, vector<int>, greater<int>> minh;

public:
    KthLargest(int k, vector<int>& nums) {
        kth = k;

        for (int x : nums) {
            minh.push(x);

            if (minh.size() > k)
                minh.pop();
        }
    }

    int add(int val) {
        minh.push(val);

        if (minh.size() > kth)
            minh.pop();

        return minh.top();
    }
};