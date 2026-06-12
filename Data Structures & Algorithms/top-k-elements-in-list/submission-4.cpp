class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map <int,int> mp;
    vector<int> res;
    vector<vector<int>> v(nums.size()+1);
    for(int num:nums){
        mp[num]++;
    }
    for(auto it:mp){
        v[it.second].push_back({it.first});
    }
    for(int i=v.size()-1;i>=0;i--){
        for(int x:v[i]){
            res.push_back(x);
            if(res.size()==k){
                return res;
            }
        }
    }
    }
};
