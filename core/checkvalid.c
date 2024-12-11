#include "common.h"

bool validRow(int row){
    auto int vis[30];

    for(int i = 0; i < N; i++){
        if(sudomat[row][i] != 0){
            int val = sudomat[row][i];

            if(vis[val] != 0)
                return false;
            vis[val]=1;
        }
    }
    return true;
}

bool validCol(int col){
    auto int vis[30];

    for(int i = 0; i < N; i++){
        if(sudomat[i][col] != 0){
            int val = sudomat[i][col];

            if(vis[val] != 0)
                return false;
            vis[val]=1;
        }
    }
    return true;
}

bool subValid(int startRow, int startCol){
    auto int vis[30];

    for(int row = 0; row < SRN; row++){
        for(int col = 0; col < SRN; col++){
            int curr = sudomat[row + startRow][col + startCol];
            if(curr != 0){
                if(vis[curr] != 0)
                    return false;
                vis[curr]=1;
            }
        }
    }
    return true;
}

bool isValid(){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(!validRow(i) || !validCol(j) || !subValid(i-i%SRN, j-j%SRN))
                return false;
        }
    }
    return true;
}
extern void checkSudokuValid(){
    if(isValid()){
        printf("Sudoku is valid!");
    }
    else {
        printf("Sudoku is not valid!");
    }
    
}
