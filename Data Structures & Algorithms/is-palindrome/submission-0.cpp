class Solution {
public:
    bool isPalindrome(string s) {
        string c;
        for( char ch: s){
            if(isalnum(ch)){
                c.push_back(tolower(ch));
            }
        }
        int l=0;
        int r=c.size()-1;
        while(l<r){
            if(c[l]==c[r]){
                l++;
                r--;
            }
            else
                return false;
        }
        return true;

    }
};
