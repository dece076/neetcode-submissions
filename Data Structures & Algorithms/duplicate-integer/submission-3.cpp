class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int flag=0;
        unordered_map <int,int> mp;
        for(auto it = nums.begin(); it != nums.end(); it++) {
            mp[*it]++;
            if (mp[*it]>1){
                return true;
                break;
            }
        }
        if (flag==0){
            return false;
        }

    }
};