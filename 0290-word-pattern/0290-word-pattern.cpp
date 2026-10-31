class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,int> chartoIndex;
        unordered_map<string,int> wordtoIndex;
        stringstream ss(s);
        string token;
        int countTokens=0;
        int i=0;
        int n=pattern.size();
        while(ss>>token){
            countTokens++;
            if(i==n || chartoIndex[pattern[i]]!=wordtoIndex[token]) return false;
            chartoIndex[pattern[i]]=i+1;
            wordtoIndex[token]=i+1;
            i++;
        }
        if(countTokens!=n || i!=n) return false;
        return true;
    }
};