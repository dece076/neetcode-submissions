class Solution {
public:
    bool isPalindrome(string s) {
        string noSpace="";
        for (char ch:s){
            if (isalnum(ch)){
                noSpace+=tolower(ch);
            }
            else continue;
            
        }
        int left = 0;
        int right = noSpace.size()-1;
        while (left<right){
            if (noSpace[left]!=noSpace[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};
