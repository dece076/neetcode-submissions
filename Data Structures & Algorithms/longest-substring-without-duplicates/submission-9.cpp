class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0, maxlen = 0;
        unordered_map <char,int> mp;
        int n=s.size();
        while (r<n){
            mp[s[r]]++;
            while (mp[s[r]]>1){
                mp[s[l]]--;
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};
