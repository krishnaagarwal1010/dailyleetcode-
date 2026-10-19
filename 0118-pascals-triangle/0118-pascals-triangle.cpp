class Solution {
public:
    vector<int> getRows(int rowInd){
        vector<int> rowArr={1};
        long long ans=1;
        for(int c=1; c<=rowInd; c++){
            ans=ans*(rowInd+1-c);
            ans=ans/c;
            rowArr.push_back(ans);
        }
        return rowArr;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tillRows;
        for(int i=0; i<numRows; i++){
            tillRows.push_back(getRows(i));
        }
        return tillRows;
    }
};