class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;
        for (int r=0;r<9;r++){
            for (int c=0;c<9;c++){
                if (board[r][c]=='.'){
                    continue;
                }
                string row="r"+to_string(r)+board[r][c];
                string col="c"+to_string(c)+board[r][c];
                string box="b"+to_string((r/3)*3+c/3)+board[r][c];
                if (seen.count(row)||seen.count(col)||seen.count(box)){
                    return false;
                }
                seen.insert(row);
                seen.insert(col);
                seen.insert(box);
            }
        }
        return true;
    }
};
