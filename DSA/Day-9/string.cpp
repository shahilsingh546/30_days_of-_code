class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<int,int>mp;
        int cnt =words.size();
        for(int i =0;i<allowed.size();i++)
        {
            mp[allowed[i]]++;
        }
        for(int i =0;i<words.size();i++)
        {
            for(int j =0;j<words[i].size();j++)
            {
                if(!mp[words[i][j]])
                {
                    cnt--;
                    break;
                }
            }
        }
        return cnt;
    }
};