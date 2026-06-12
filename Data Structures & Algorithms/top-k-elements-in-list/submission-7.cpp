class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        vector <int> res;
        vector <vector<int>> bucket(nums.size()+1);
        for(auto n:nums){
            mp[n]++;
        }
        for (auto it:mp){
            bucket[it.second].push_back(it.first);
        }
        for(int i=nums.size();i>=0;i--){
            if(!bucket[i].empty()){
                for (int x:bucket[i]){
                    res.push_back(x);
                    k--;
                    if(k==0) return res;
                }
                
            }
        }
    }
};
