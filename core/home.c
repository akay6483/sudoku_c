#include "common.h"
#include "utils.c"
#include "fileopt.c"

void main_menu();
extern void solveSudoku(void){
    printf("Solved sudoku twice!");
    return;
}
extern void checkSudokuValid(void){
    printf("testing sudoku valid");
    return;
}
extern void checkBoardValid(void){
    printf("Blank space");
    return;
}

extern void generateSudoku(void);

extern void solveSudoku(void);

extern void checkBoardValid(void);

extern void checkSudokuValid(void);

extern void displaySudoku();

extern void readSudoku();

extern void writeSudoku();

void main(){
    main_menu();
    return;
}

void main_menu(){
        {
        printf("\nSudoku Utility");
        printf("\n________________");

        printf("\n<File Options>\n");
        printf("\n[ a. Display sudoku ]");
        printf("\t[ b. Print sudoku to file ]");
        printf("\t[ c. Read sudoku from file ]\n");

        printf("\n________________");

        printf("\n==================================================\n");

        printf("\n________________");
        printf("\n<Utilities>");
        printf("\n1. Generate new sudoku [9x9]");
        printf("\n2. Solve loaded sudoku");
        printf("\n3. Check sudoku valid");
        printf("\n4. Check board valid\n");
        printf("\n________________");

        printf("\n{e _> Exit}\n");

        char opt;
        scanf("%c",&opt);
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
                break;

             case 'a':
                displaySudoku();
                break;
            case 'b':
                readSudoku();
                break;
            case 'c':
                writeSudoku();
                break;   

            case 'e':
                exit(0);
                break;
            default:
                printf("==================================================");
        } 
        main();
    }
}