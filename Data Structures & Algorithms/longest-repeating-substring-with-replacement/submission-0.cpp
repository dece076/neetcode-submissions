class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int res=0;
        int maxFreq=0;
        unordered_map <char,int> mp;
        for(int r=0;r<s.size();r++){
            mp[s[r]]++;
            int win=r-l+1;
            maxFreq=max(maxFreq,mp[s[r]]);
            while (win-maxFreq>k){
                mp[s[l]]--;
                l++;
                win=r-l+1;
            }
            res=max(res,r-l+1);
        }
        return res;
    }
};
