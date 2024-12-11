#include "common.h"

extern void setSudoku(){
    printf("Grid size : ");
    scanf("%d",&N);
    //N = 9;
    float SRNd = sqrt(N);
    SRN = (int)SRNd;
}
extern void clearSudoku(){
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            sudomat[i][j] = 0;
        }
    }
}
extern void displaySudoku(){
    printf("\n________________\n");
    printf("[ Current Sudoku ]");
    printf("\n________________\n");
    for(int i = 0; i<N; i++){
        printf("\n");
        for(int k = 0; k<N; k++){
            printf(" ____ ");
        }
        printf("\n");
        for(int j=0; j<N; j++)
            printf("|  %d  ",sudomat[i][j]);
        printf("|");
    }
    printf("\n");
}

extern void readSudoku(){

}

extern void writeSudoku(){

}