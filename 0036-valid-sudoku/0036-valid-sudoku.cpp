class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_set<string> s;
        
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[i].size(); j++){
                
                if(board[i][j]!='.'){
                    
                    
                    //store value of 3 set row, col for each grid
                    string row ="row"+ to_string(i) +"position "+board[i][j]; 
                    string col = "col"+to_string(j)+"position "+board[i][j];
                    string grid = "grid"+to_string((i/3)*3+(j/3))+"position "+board[i][j];  //position of box1,2,3...9
                    
                    //If board[i][j] not present in set
                    if(s.find(row)==s.end() && s.find(col)==s.end() && s.find(grid)==s.end()){
                        s.insert(row);
                        s.insert(col);
                        s.insert(grid);
                    }
                    //duplicate found in perticular grid
                    else{
                        return false;
                    }
                    
                }
            }
        }
        return true;
    }
};