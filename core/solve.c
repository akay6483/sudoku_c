#include "common.h"

bool isSafe(int row, int col, int num){

    for(int x = 0; x < N; x++){
        if(sudomat[row][x] == num)
            return false;
    }

    for(int x = 0; x < N; x++){
        if(sudomat[x][col] == num)
            return false;
    }


    int startRow = row - row % SRN;
    int startCol = col - col % SRN;

    for(int i = 0; i<SRN; i++){
        for(int j = 0; j<SRN; j++){
            if(sudomat[i+startRow][j+startCol] == num)
            return false;
        }
    }
    return true;
}

bool solveSudoku(int row, int col){
    if(row == N-1 && col == N)
        return true;
    
    if(col == N){
        row++;
        col = 0;
    }

    if(sudomat[row][col] > 0)
        return solveSudoku(row, col+1);

    for(int num = 1; num <= N; num++){
        if(isSafe(row, col, num))
        {
            sudomat[row][col] = num;
            if(solveSudoku(row,col+1))
                return true;
        }
        sudomat[row][col] = 0;
    }
    return false;
}

void trySolveSudoku(){
    if(solveSudoku(0,0)){
        printf("Sudoku solved!\n(Solution may not be unique)");
        displaySudoku();
    }
    else{
        printf("Impossible to solve!\n(possible reason : invalid sudoku board, not enought clues, algorithm failuer)\nTry again.)");
    }
}