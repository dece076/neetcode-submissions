class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<pair<int,int>> v;
        vector <int> v2;
        for (int i=0;i<nums.size();i++){
            mp[nums[i]]+=1;
        }
        //int v[nums.size()]={0};
        for (auto it:mp){
            v.emplace_back(it.second,it.first);
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        for (int i=0;i<k;i++){
            v2.emplace_back(v[i].second);
        }
        return v2;
        
    }
};
