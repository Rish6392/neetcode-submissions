class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        

        for(int i=0;i<9;i++){
            unordered_map<char,int>row;
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]!='.'){
                    row[board[i][j]]++;
                }
            }
            for(auto it:row){
                if(it.second>1){
                    return false;
                }
            }
        }

        

        for(int j=0;j<9;j++){
            unordered_map<char,int>col;
            for(int i=0;i<board[j].size();i++){
                if(board[i][j]!='.'){
                    col[board[i][j]]++;
                }
            }
            for(auto it:col){
                if(it.second>1){
                    return false;
                }
            }
        }
        
       

       for(int i=0;i<9;i+=3){
        //    unordered_map<char,int>box;
        //    for(int j=0;j<3;j++){
        //     for(int k=0;k<3;k++){
        //         if(board[j][k]!='.'){
        //             box[board[j][k]]++;
        //         }
        //     }
        //    }
        //    for(auto it:box){
        //         if(it.second>1){
        //             return false;
        //         }
        //     }
        for(int j = 0; j < 9; j+= 3){
            unordered_map<char,int>box;
            for(int k = i; k < i + 3; k++) {
                for(int l = j; l < j + 3; l++) {
                    if(board[k][l]!='.'){
                    box[board[k][l]]++;
                }
                }
            }
            for(auto it:box){
                if(it.second>1){
                    return false;
                }
            }
        }
       }

       return true;


    }
};
