class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector <pair<int,int>> v1;
        vector <int> v2;
        for (auto it: mp){
            v1.emplace_back(it.second,it.first);
        }
        sort(v1.begin(),v1.end(),greater<pair<int,int>>());
        for (int i=0;i<k;i++){
            v2.emplace_back(v1[i].second);
        }
        return v2;
        
    }
};
