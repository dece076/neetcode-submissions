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
            //int x=1;
            //if (s[i+2]=='#'&&s[i+1]!='#') x=2;
            //else if (s[i+3]=='#'&&s[i+2]!='#'&&s[i+1]!='#') x=3;
            int j=i;
            while (s[j]!='#'){
                j++;
            }
            int size = stoi(s.substr(i,j-i));
            vs.push_back(s.substr((j+1),size));
            i=j+size;
        }
        return vs;
    }
};
