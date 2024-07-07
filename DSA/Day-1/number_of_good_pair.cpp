// problem statement :- Given an array of integers nums, return the number of good pairs.

// A pair (i, j) is called good if nums[i] == nums[j] and i < j.


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt = 0;
        for(int i =0;i<nums.size();i++)
        {
            for(int k = i+1;k<nums.size();k++)
            {
                if(nums[i]==nums[k])
                cnt++;
            }
        }
        return cnt;
    }
};