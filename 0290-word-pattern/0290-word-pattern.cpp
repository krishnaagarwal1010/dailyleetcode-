class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string token;
        int countWords=0;
        while(getline(ss,token,' ')){
            words.push_back(token);
            countWords++;
        }
        int n=pattern.length();
        if(n!=countWords) return false;
        unordered_map<string,char> mp;
        set<char> st;
        for(int i=0; i<n; i++){
            string word=words[i];
            char ch=pattern[i];
            if(mp.find(word)==mp.end() && st.find(ch)==st.end()){
                mp[word]=ch;
                st.insert(ch);
            }
            else if(mp[word]!=ch){
                return false;
            }
        }
        return true;
    }
};