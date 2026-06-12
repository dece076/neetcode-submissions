class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        // STEP 1: Traverse all strings
        for(int i = 0; i < strs.size(); i++) {

            // STEP 2: Copy original string
            string s = strs[i];

            // STEP 3: Sort the copied string
            sort(s.begin(), s.end());

            // STEP 4: Push original string into group
            mp[s].push_back(strs[i]);
        }

        // STEP 5: Create answer vector
        vector<vector<string>> ans;

        // STEP 6: Put all groups into ans
        for(auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};