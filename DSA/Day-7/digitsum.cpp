class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum =0,dSum =0;
        for(int i =0;i<nums.size();i++)
        {
            sum+=nums[i];
            while(nums[i]!=0)
            {
                int rem = nums[i]%10;
                 dSum += rem;
                nums[i] = nums[i]/10;
            }
        }
        int ans = abs(sum-dSum);
        return ans;

    }
};