class Solution {
public:
    int binary_search(vector<int>& nums, int target, int i, int pivot) {

        while (i <= pivot) {
            int mid = i + (pivot - i) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                pivot = mid-1;
            } else {
                i = mid + 1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        // first find pivot
        int i = 0;
        int j = n - 1;
        while (i < j) {
            int mid = i + (j - i) / 2;
            if (nums[mid] > nums[j]) {
                // pivot on right side
                i = mid + 1;
            } else {
                // pivot on left side
                j = mid;
            }
        }
        int pivot = j;

        // now we will do binary serach
        // first from 0 to pivot-1
        int result1 = binary_search(nums, target, 0, pivot - 1);
        int result2 = binary_search(nums, target, pivot, n - 1);
        if (result1 != -1) {
            return result1;
        }
        return result2;
    }
};
