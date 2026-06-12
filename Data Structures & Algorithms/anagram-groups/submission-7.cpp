class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector <vector<string>> res;
        unordered_map <string,vector<string>> mp;
        for (const auto& s:strs){
            vector<int> hash(26,0);
            for (char ch:s){
                hash[ch-'a']++;
            }
            string key=to_string(hash[0]);
            for (int i=1;i<26;i++){
                key+="#"+to_string(hash[i]);
            }
            mp[key].push_back(s);
        }
        for (auto it:mp){
            res.push_back(it.second);
        }
        return res;
    }
};
