#include "common.h"
#include <stdio.h>

void generateSudoku(void){
    printf("Hello world!");
    return;
}

void solveSudoku(void){
    printf("Solved the sudoku");
    return;
}

int main(void){
    char opt;
    int loop = 1;
    while(loop == 1){
        generateSudoku();
        solveSudoku();
        printf("\nSudoku Utility");
        printf("\n________________");

        printf("\n<File Options>\n");
        printf("\n[ a. Display sudoku ]");
        printf("\t[ b. Print sudoku to file ]");
        printf("\t[ c. Read sudoku from file ]\n");

        printf("\n<Utilities>");
        printf("\n1. Generate new sudoku [9x9]");
        printf("\n2. Solve loaded sudoku");
        printf("\n3. Check sudoku valid");
        printf("\n4. Check sudoku board valid\n");

        printf("\n{e _> Exit}\n");
      
        switch(opt){
            case '1':
                generateSudoku();
                break;
            case '2':
                solveSudoku();
                break;
            case '3':
                checkSudokuValid();
                break;
            case '4':
                checkBoardValid();
        }
        
    }
    return -111;
}