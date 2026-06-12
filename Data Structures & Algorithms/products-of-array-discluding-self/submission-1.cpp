class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> res(nums.size(),1);
        int leftp=1;
        int rightp=1;
        for (int i=1;i<nums.size();i++){
            res[i]=nums[i-1]*leftp;
            leftp=res[i];
        }
        for (int i=nums.size()-2;i>=0;i--){
            res[i]*=nums[i+1]*rightp;
            rightp*=nums[i+1];
        }
        return res;
    }
};
