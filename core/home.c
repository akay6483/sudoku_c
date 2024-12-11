#include "common.h"
#include "solve.c"
#include "checkvalid.c"
#include "fileopt.c"
#include "generate.c"


extern void checkSudokuValid(void){
    printf("testing sudoku valid");
    return;
}
extern void checkBoardValid(void){
    printf("Blank space");
    return;
}

extern void generateSudoku();

extern void clearSudoku();

extern void trySolveSudoku();

extern void checkBoardValid(void);

extern void checkSudokuValid(void);

extern void displaySudoku();

extern void readSudoku();

extern void writeSudoku();

void control();
void menu();

void control(){
    menu();
}

void menu(){
        {
        printf("\n=========================================================\n");
        printf("\n++++++++++++++");
        printf("\nSudoku Utility");
        printf("\n++++++++++++++\n");


        printf("\n________________");
        printf("\n<File Options>");
        printf("\n[ a. Display sudoku ]");
        printf("\t[ b. Print sudoku to file ]");
        printf("\t[ c. Read sudoku from file ]");
        printf("\t[ d. Clear sudoku ]");
        printf("\n________________\n");

        printf("\n________________");
        printf("\n<Utilities>");
        printf("\n0. Set grid size");
        printf("\n1. Generate new sudoku [9x9]");
        printf("\n2. Create sudoku puzzle");
        printf("\n3. Solve loaded sudoku");
        printf("\n4. Check sudoku valid");
        printf("\n5. Check board valid");
        printf("\n________________\n");

        printf("\n~~~~~~~~~~~");
        printf("\n{e _> Exit}\n");
        printf("~~~~~~~~~~~\n");

        printf("\n=========================================================\n");

        char opt;
        scanf("%c",&opt);
        switch(opt){
            case '0':
                setSudoku();
                break;
            case '1':
                generateSudoku();
                break;
            case '2':
                createSudokuPuzzle();
                break;
            case '3':
                trySolveSudoku();
                break;
            case '4':
                checkSudokuValid();
                break;
            case '5':
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
            case 'd':
                clearSudoku();
                break;

            case 'e':
                exit(0);
                break;
            default:
                printf("Program restarting.....");
        } 
        control();
    }
}

void main(){
    control();
}