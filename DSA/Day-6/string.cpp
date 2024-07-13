// check if two strings are equal or not 
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string concat1 = "";
        string concat2 = "";
        for(int i =0;i<word1.size();i++ )
        {
            concat1+= word1[i];
        }
         for(int i =0;i<word2.size();i++ )
        {
            concat2+= word2[i];
        }
        if(concat1 == concat2)
        return true;

        return false;
    }
};