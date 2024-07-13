// Minimum Number Game

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>arr;
        int a =0;
        int b= 1;
        sort(nums.begin(),nums.end());
        int n =  nums.size();
        while(b<n && a<n-1)
        {
            arr.push_back(nums[b]);
            arr.push_back(nums[a]);
            b = b+2;
            a= a+2;
        }
        return arr;
    }
};