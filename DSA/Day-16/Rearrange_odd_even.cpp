class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int k =0;
        int j = 1;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i] > 0)
            {
                ans[k] = nums[i];
                k = k+2;
            }
            else {
                ans[j] = nums[i];
                j = j+2;
            }
        }
        return ans;
    }
};