class Solution {
public:
    int trap(vector<int>& height) {
        int lm=0;
        int rm=0;
        int l=0;
        int r=height.size()-1;
        int water=0;
        while (l<r){
            if (height[l]<=height[r]){
                if(height[l]>=lm){
                    lm=height[l];
                }
                else water+=max(0,lm-height[l]);

                l++;
            }
            if (height[r]<height[l]){
                if (rm<=height[r]) rm=height[r];
                else water+=max(0,rm-height[r]);
                r--;
            }
        }
        return water;

    }
};
