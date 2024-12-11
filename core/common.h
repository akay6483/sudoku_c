#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int sudomat[30][30];
int N,K,SRN;

extern void setSudoku();

extern void clearSudoku();

extern void generateSudoku();

extern void makeSudokuPuzzle();

extern void trySolveSudoku();

extern void checkBoardValid();

extern void checkSudokuValid();

extern void displaySudoku();

extern void readSudoku();

extern void writeSudoku();