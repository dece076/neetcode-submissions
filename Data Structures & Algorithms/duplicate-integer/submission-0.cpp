class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int flag=0;
        map <int,int> mp;
        for(auto it = nums.begin(); it != nums.end(); it++) {
            mp[*it]++;
            if (mp[*it]>1){
                flag=1;
                break;
            }
        }
        if (flag==1){
            return true;
        }
        else
            return false;

    }
};