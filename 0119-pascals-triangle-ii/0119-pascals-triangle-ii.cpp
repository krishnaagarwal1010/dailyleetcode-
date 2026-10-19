class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> rowArr={1};
        long long ans=1;
        for(int c=1; c<=rowIndex; c++){
            ans=ans*(rowIndex+1-c);
            ans=ans/c;
            rowArr.push_back(ans);
        }
        return rowArr;
    }
};