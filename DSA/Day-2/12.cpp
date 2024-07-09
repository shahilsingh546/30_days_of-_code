class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int cnt =0;
        sort(nums.begin(),nums.end());
        int l =0;
        int r = nums.size()-1;
        while(l<r)
        {
            if( nums[l] + nums[r]<target)
            {
                cnt+= r-l;
                l++;
            }
            else
            {
                r--;
            }

        }
        return cnt;
    }
};