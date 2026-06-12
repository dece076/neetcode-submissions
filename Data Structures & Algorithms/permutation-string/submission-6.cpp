class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector <int> ss1(26,0);
        vector <int> ss2(26,0);
        int l=0;
        if (s1.size()>s2.size()){
            return false;
        }
        for(int i=0;i<s1.size();i++){
            ss1[s1[i]-'a']++;
            ss2[s2[i]-'a']++;
        }
        int matches=0;
        for(int i=0;i<26;i++){
            if (ss1[i]==ss2[i]){
                matches++;
            }
        }
        for (int r=s1.size();r<s2.size();r++){
            if (matches==26){
                return true;
            }
            int index=s2[r]-'a';
            ss2[index]++;
            if (ss1[index]==ss2[index]){
                matches++;
            }
            else if (ss1[index]+1==ss2[index]){
                matches--;
            }
            index=s2[l]-'a';
            ss2[index]--;
            if(ss1[index]==ss2[index]){
                matches++;
            }
            else if (ss1[index]-1==ss2[index]){
                matches--;
            }
            l++;
        }
        if (matches==26){
                return true;
        }
        return false;
       

    }
};
