class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack <pair<int,int>> st;
        int n = temperatures.size();
        vector <int> v(n,0);
        for (int i=0;i<n;i++){
            while ((!st.empty()) && temperatures[i]>st.top().first){
                v[st.top().second]=i-st.top().second;
                st.pop();
            }
            st.push({temperatures[i],i});
        }
        return v;
    }
};
