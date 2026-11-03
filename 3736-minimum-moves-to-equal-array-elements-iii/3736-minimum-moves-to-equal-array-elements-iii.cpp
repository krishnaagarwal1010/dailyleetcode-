class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves=0;
        int maxi=INT_MIN;
        for(int num:nums){
            maxi=max(maxi,num);
        }
        for(int num: nums){
            int diff=maxi-num;
            moves+=diff;
        }
        return moves;
    }
};