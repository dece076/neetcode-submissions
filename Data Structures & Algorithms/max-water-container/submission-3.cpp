class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;
        int maxa=0;
        while (l<r){
            int height = min(heights[l],heights[r]);
            int base = r-l;
            maxa= max(maxa,base*height);
            if (heights[l]>heights[r]) r--;
            else if (heights[l]<heights[r]) l++;
            else r--;
        }
        return maxa;
    }
};
