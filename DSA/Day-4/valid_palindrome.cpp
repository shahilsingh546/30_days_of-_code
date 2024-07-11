// valid palindrome using recursion

class Solution {
public:

    bool rec(vector<char>&s,int i)
    {
        if(i>=s.size()/2)
        return true;

        if(s[i]!=s[s.size()-i-1])
        return false;

        return rec(s,i+1);
    }
    bool isPalindrome(string s) {
        vector<char>str;

        for(char c:s)
        {
            
            if(ispunct(c) || c == ' ')
            continue;
            c = tolower(c);
            str.push_back(c);
            
        }

        return rec(str, 0);
    }
};