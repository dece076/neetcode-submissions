class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map <int,int> mp;
        string match="";
        for (char ch: s1){
            mp[ch-'a']++;
        }
        for (int i=0;i<26;i++){
            match+=to_string(mp[i])+'#';
        }
        mp.clear();
        int l=0;
        int r=s1.size()-1;
        while (r<s2.size()){
            string match2="";
            for (int i=l;i<=r;i++){
                mp[s2[i]-'a']++;
            }
            for (int i=0;i<26;i++){
                match2+=to_string(mp[i])+'#';
            }
            if(match==match2)
                return true;
            l++;
            r++;
            mp.clear();
        }
        return false;
    }
};
