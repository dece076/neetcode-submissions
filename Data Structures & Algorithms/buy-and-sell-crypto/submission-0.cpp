class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=1;
        int maxi=0;
        while(j<prices.size()){
            if (prices[j]<prices[i]){
                i=j;
                j++;
            }
            else{
                int diff=prices[j]-prices[i];
                maxi=max(diff,maxi);
                j++;
            }
        }
        return maxi;
    }
};
