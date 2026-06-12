class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> mp;
        vector<vector<string>> v;
        for (int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].emplace_back(strs[i]);
        }
        for (auto it:mp){
                v.emplace_back(it.second);
        }
        return v;
    }
};