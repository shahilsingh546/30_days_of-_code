class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.empty()) return -1;

        if(nums.size() == 1) return nums[0];

        int ans = nums[0];
        
        int low = 0;
        int high = nums.size()-1;

        while(low <= high) {
            int mid = (low + high) / 2;

            if(nums[low] <= nums[mid]) {
                ans = min(ans, nums[low]);
                low = mid + 1;
            }
            else {
                ans = min(ans, nums[mid]);
                high = mid - 1;
            }
        }

        return ans;
    }
};