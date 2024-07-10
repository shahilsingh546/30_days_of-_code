class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ans;
        int lSum = 0;
        int rSum =0;
        for(int i  =0;i<nums.size();i++) rSum+=nums[i];
        for(int i =0;i<nums.size();i++)
        {
            rSum -= nums[i];
            ans.push_back(abs(lSum-rSum));
            lSum+=nums[i];
        }
        return ans;
    }
};