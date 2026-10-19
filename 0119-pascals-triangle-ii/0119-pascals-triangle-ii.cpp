class Solution {
public:
    long long nCr(int n, int r){
        long long res=1;
        for(int i=0; i<r; i++){
            res=res*(n-i);
            res/=(i+1);
        }
        return res;
    }
    vector<int> getRow(int rowIndex) {
        vector<int> rowArr;
        for(int c=0; c<=rowIndex; c++){
            rowArr.push_back(nCr(rowIndex,c));
        }
        return rowArr;
    }
};