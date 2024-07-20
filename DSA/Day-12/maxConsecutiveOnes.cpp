class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans = INT_MIN;
        int len = 0;
        for(int i =0;i<nums.size();i++)
        {
            if(mp.find(nums[i]) != mp.end())
            {
                 len = i-mp[nums[i]]+1;
            }
            else
            {
                mp[nums[i]] = i;
                if(nums[i] != 1)
                {

                }
            }
            ans = max(len, ans);
        }
        return ans;
    }
};