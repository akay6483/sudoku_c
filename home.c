#include "sudoGenerator.c"
#include "common.h"

int main(){
    char opt;
    int loop = 1;
    while(loop == 1){
        printf("\nSudoku Utility");
        printf("\n________________");

        printf("\n<File Options>\n");
        printf("\n[ a. Display sudoku ]");
        printf("\t[ b. Print sudoku to file ]");
        printf("\t[ c. Read sudoku from file ]\n");

        printf("\n<Utilities>");
        printf("\n1. Generate new sudoku [9x9]");
        printf("\n2. Solve loaded sudoku");
        printf("\n3. Check loaded sudoku valid");
        printf("\n4. Check loaded sudoku board valid");
        printf("\n9. Exit\n");
        scanf("%c",&opt);

        switch(opt){
            case '1':
                generateSudoku();
                break;
            case '9':
                printf("\nExiting program.........");
                loop = 0;
                break;
            default:
                printf("<Application crashed!>\n<Critical failure.>");
        }
    }
    return -111;
}