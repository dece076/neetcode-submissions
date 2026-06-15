class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector <int>> res;
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size();i++){
            if (i>0 && nums[i]==nums[i-1]) continue;
            else if (nums[i]>0) break;
            int j=i+1;
            int k=nums.size()-1;
            while (j<k){
                int target=0-nums[i];
                int sum=nums[j]+nums[k];
                if (sum<target) j++;
                else if (sum>target) k--;
                else{
                    vector <int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    res.push_back(temp);
                    j++;
                    k--;
                    while (j<k && nums[j]==nums[j-1]) j++;
                    while (j>k && nums[k]==nums[k+1]) k++;
                }
            }
        }
        return res;
    }
};
