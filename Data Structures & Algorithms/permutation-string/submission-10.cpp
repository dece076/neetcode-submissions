class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector freq(26,0);
        vector freq2(26,0);
        if (s2.size()<s1.size())
            return false;
        for (int i=0;i<s1.size();i++){
            freq[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }
        
        int l=0;
        int r=s1.size();
        int match=0;

        for (int i=0;i<26;i++){
            if (freq[i]==freq2[i])
                match++;
        }
        if (match==26)
            return true;
        else
            match=0;
        while (r<s2.size()){
            freq2[s2[l]-'a']--;
            freq2[s2[r]-'a']++;
            l++;
            r++;
            for (int i=0;i<26;i++){
                if (freq[i]==freq2[i])
                    match++;
            }
            if (match==26)
                return true;
            else
                match=0;
        }
        return false;
    }
};
