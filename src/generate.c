#include "common.h"

bool unUsedInBox(int rowStart, int colStart, int num){
    for(int i = 0; i<SRN; i++)
        for(int j=0; j<SRN; j++)
            if(sudomat[rowStart+i][colStart+j]==num)
                return false;
    return true;
}

void fillBox(int row,int col){
    int num;
    for(int i=0; i<SRN; i++){
        for(int j=0; j<SRN; j++){
            do{
                num = rand() % (N-1+1) + 1;
            }while(!unUsedInBox(row, col, num));
            sudomat[row+i][col+j] = num;
        }
    }
}
void fillDiagonal(){
    for(int i=0; i<N; i=i+SRN){
        fillBox(i, i);
    }
}

bool unUsedInRow(int i, int num){
    for(int j=0; j<N; j++){
        if(sudomat[i][j] == num)
            return false;
    }
    return true;
}
bool unUsedInCol(int j, int num){
    for(int i=0; i<N; i++){
        if(sudomat[i][j] == num)
            return false;
    }
    return true;
}
bool CheckIfSafe(int i,int j,int num){
    return (unUsedInRow(i, num) && unUsedInCol(j, num) && unUsedInBox(i-i%SRN, j-j%SRN, num));
}
bool fillRemaining(int i, int j){
    if(j>=N && i<N-1){
        i = i + 1;
        j = 0;
    }
    if(i>=N && j>=N)
    {
        return true;
    }
    if(i<SRN){
        if(j<SRN){
            j = SRN;
        }
    }
    else if(i<N-SRN){
        if(j==(int)(i/SRN)*SRN){
            j = j + SRN;
        }
    }
    else{
        if(j==N-SRN){
            i=i+1;
            j=0;
            if(i>=N){
                return true;
            }
        }
    }
    for(int num = 1; num<=N; num++){
        if(CheckIfSafe(i, j, num)){
            sudomat[i][j] = num;
            if(fillRemaining(i,j+1))
                return true;
            sudomat[i][j] = 0;
        }
    }
    return false;
}



void fillValues(){
    fillDiagonal();
    fillRemaining(0, SRN);
}



void removeValues(int k){
    int count = k;
    while(count != 0){
        int cellId = rand() % (N*N-1+1) + 1 -1;
        //printf("%d\t",cellId);
        //printf("%f\t",cellId/N);
        //printf("%f\t",cellId%N);

        int i = (cellId/N);
        int j = (cellId%N);

        if(sudomat[i][j] != 0){
            count--;
            sudomat[i][j] = 0;
        }
    }
}

extern void generateSudoku(){
    clearSudoku();
    fillValues();
    
    printf("\nSudoku generated successfully!");
    displaySudoku();
    return;
}

extern void makeSudokuPuzzle(){
    printf("Enter no of digits to remove: ");
    int nos;
    scanf("%d",&nos);
    removeValues(nos);

    printf("\nSudoku puzzle created successfully!");
    displaySudoku();
}