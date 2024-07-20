class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>ans = nums;
        for(int i =0;i<nums.size();i++)
        {
            nums[(k+i) % nums.size()] = ans[i];
        }
    }
};