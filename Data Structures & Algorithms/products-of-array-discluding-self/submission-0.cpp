class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> right(nums.size(),1);
        vector <int> left(nums.size(),1);
        vector <int> res;
        int leftp=1;
        int rightp=1;
        for (int i=1;i<nums.size();i++){
            left[i]=nums[i-1]*leftp;
            leftp=left[i];
        }
        for (int i=nums.size()-2;i>=0;i--){
            right[i]=nums[i+1]*rightp;
            rightp=right[i];
        }
        for (int i=0;i<nums.size();i++){
            res.push_back(right[i]*left[i]);
        }
        return res;
    }
};
