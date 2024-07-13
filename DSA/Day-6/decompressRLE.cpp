// Decompress Run-Length Encoded List

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>ans;
        int i =0,j=1;
        int n = nums.size();
        while(i<n-1 && j<n){
            int freq = nums[i];
            int value = nums[j];
            while(freq!=0)
            {
                ans.push_back(nums[j]);
                freq--;
            }
            i = i+2;
            j = j+2;
        }
        return ans;
    }
};