class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> sides;
        int w=sqrt(area);
        while(area%w!=0){
            w--;
        }
        int l=area/w;
        sides.push_back(l);
        sides.push_back(w);
        return sides;
    }
};