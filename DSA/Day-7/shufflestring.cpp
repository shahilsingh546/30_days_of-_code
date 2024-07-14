class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        // unordered_map<char,int>mp;
        vector<int>v(s.size(),0);
        string ans = "";


        for(int i =0;i<indices.size();i++)
        {
            v[indices[i]] = s[i]; 
        }

    for(int i =0;i<v.size();i++)
    {
        ans+= v[i];
    }
    return ans;
    }
};