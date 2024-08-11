class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int l =0;
        int r = nums.size()-1;
        int firstocc =-1;
        int lastocc = -1;
        while( l<= r)
        {
            int mid = (l+r)/2;
            if(nums[mid]<target)
            {
                l = mid+1;
            }
            else if(nums[mid]>target)
            {
                r = mid-1;
            }
            else
            {
                firstocc = mid;
                r = mid-1;
            }
        }

        ans.push_back(firstocc);
        l =0;
        r = nums.size()-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(nums[mid]<target)
            {
                l = mid+1;
            }
            else if(nums[mid]>target)
            {
                r = mid-1;
            }
            else
            {
                lastocc = mid;
                l= mid+1;
            }
        }
        ans.push_back(lastocc);
        return ans;
    }
};