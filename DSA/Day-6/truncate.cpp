// Truncate Sentence 

class Solution {
public:
    string truncateSentence(string s, int k) {
        int cnt =0;
        int i =0;
        for(;i<s.size();i++)
        {
            if(s[i] == ' ')
            {
                if(cnt < k-1)
                cnt++;
                else
                break;
            }
        }
        s = s.substr(0,i);
        return s;
    }
};