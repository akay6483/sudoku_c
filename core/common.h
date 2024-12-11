#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int sudomat[20][20];
int N,K,SRN;

extern void generateSudoku(void);

extern void solveSudoku(void);

extern void checkBoardValid(void);

extern void checkSudokuValid(void);

extern void displaySudoku();

extern void readSudoku();

extern void writeSudoku();