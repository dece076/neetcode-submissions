class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> v;
    int l=0;
    int r=numbers.size()-1;
    while(l<r){
        int rem=target-numbers[l];
        if(numbers[l]+numbers[r]==target){
            v.push_back(l+1);
            v.push_back(r+1);
            break;
        }
        else if(numbers[r]>rem){
            r--;
        }
        else
            l++;
    }
    return v;
    }
};
