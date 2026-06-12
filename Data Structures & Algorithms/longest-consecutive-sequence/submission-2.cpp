class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num(nums.begin(),nums.end());
        int longest=0;
        for (int x:num){
            int len=0;
            if(num.find(x-1)==num.end()){
                len=1;
                while(num.find(x+1)!=num.end()){
                    len++;
                    x++;
                }
                longest=max(len,longest);
            }

        }
        return longest;
    
    }
};
