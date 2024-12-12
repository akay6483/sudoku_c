#include "common.h"
#include "solve.c"
#include "checkvalid.c"
#include "fileopt.c"
#include "generate.c"

void control();
void menu();

void control(){
    menu();
}

void menu(){
        {
        printf("\n================================================================================================================\n");
        printf("\n\t\t\t\t\t+++++++++++++++++++");
        printf("\n\t\t\t\t\t+ Sudoku Utility  +");
        printf("\n\t\t\t\t\t+++++++++++++++++++\n");


        printf("\n________________________________________________________________________________________________________________");
        printf("\n<File Options>");
        printf("\n[ a. Display sudoku ]");
        printf("\t[ b. Print sudoku to file ]");
        printf("\t[ c. Open sudoku from file ]");
        printf("\t[ d. Clear sudoku ]");
        printf("\n________________________________________________________________________________________________________________\n");

        printf("\n________________________________________________________________________________________________________________");
        printf("\n<Utilities>");
        printf("\n[ 0. Set grid size");
        printf("\n[ 1. Generate new sudoku");
        printf("\n[ 2. Convert solved into puzzle");
        printf("\n[ 3. Solve loaded sudoku");
        printf("\n[ 4. Check sudoku valid");
        printf("\n[ 5. Check board valid");
        printf("\n________________________________________________________________________________________________________________\n");

        printf("\n~~~~~~~~~~~");
        printf("\n{e _> Exit}\n");
        printf("~~~~~~~~~~~\n");

        printf("\n================================================================================================================\n");

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
                makeSudokuPuzzle();
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
                writeSudoku();
                break;
            case 'c':
                readSudoku();
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