class Solution {
public:
    bool judgeSquareSum(int c) {
        long l=0;
        long h=sqrt(c);
        while(l<=h && l>=0){
            long long sumOfSquares=(l*l)+(h*h);
            if(sumOfSquares==c) return true;

            if(sumOfSquares<c){
                l++;
            }
            else h--;
        }
        return false;
    }
};