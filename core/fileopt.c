#include "common.h"

extern void displaySudoku(){
    printf("________________\n");
    printf("Current Sudoku :");
    printf("\n________________\n");
    for(int i = 0; i<N; i++){
        printf("\n  ____  ____  ____  ____  ____  ____  ____  ____  ____\n");
        for(int j=0;j<N;j++)
            printf("|  %d  ",sudomat[i][j]);
        printf("|");
    }
}

extern void readSudoku(){

}

extern void writeSudoku(){

}