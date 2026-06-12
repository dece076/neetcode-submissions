class Solution {
public:

    string encode(vector<string>& strs) {
        string en="";
        for (auto st : strs){
            int size=st.size();
            en+=to_string(size)+"#"+st;
        }
        return en;
    }

    vector<string> decode(string s) {
        vector<string> vs;
        for(int i=0;i<s.size();i++){
            int x=1;
            if (s[i+2]=='#'&&s[i+1]!='#') x=2;
            else if (s[i+3]=='#'&&s[i+2]!='#'&&s[i+1]!='#') {x=3;}
            int size = stoi(s.substr(i,x));
            vs.push_back(s.substr((i+x+1),size));
            i+=size+x;
        }
        return vs;
    }
};
