class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> st(nums.begin(),nums.end());
        int longest=0;
        for(int num:nums){
            if(!st.count(num-1)){
                int len=1;
                int cur=num;
                while(st.count(cur+1)){
                    len++;
                    cur++;
                }
                longest=max(longest,len);
            }
        }
        return longest;
    }
};
