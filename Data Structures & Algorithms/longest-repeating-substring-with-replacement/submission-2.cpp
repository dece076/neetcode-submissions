class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map <char,int> mp;
        int len=0, l=0, r=0, maxfreq=0, maxlen =0, n=s.size();
        while (r<n){
            mp[s[r]]++;
            len=r-l+1;
            maxfreq=max(maxfreq,mp[s[r]]);
            while (len-maxfreq > k){
                mp[s[l]]--;
                l++;
                len=r-l+1;
            }
            maxlen=max(maxlen,len);
            r++;
        }
        return maxlen;
    }
};
