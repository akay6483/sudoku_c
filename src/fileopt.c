#include "common.h"

extern void setSudoku(){
    printf("Grid size : ");
    scanf("%d",&N);
    //N = 9;
    float SRNd = sqrt(N);
    SRN = (int)SRNd;
}

extern void setReadSudoku(int n){
    N = n;
    float SRNd = sqrt(n);
    SRN = (int)SRNd;
}
extern void clearSudoku(){
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            sudomat[i][j] = 0;
        }
    }
}

extern void displaySudoku()
{
    printf("\n ________________\n");
    printf("[ Current Sudoku ]");
    printf("\n ________________\n");
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
    rePtr = fopen("..\\file\\dataio\\sudo.txt", "r");
    char row[maxchar];
    char *token;

    if(rePtr == NULL){
        printf("No file found or unable to open.");
    }
    else{
        printf("\nFile opened succesfully.");
        int i = 0;
        while (feof(rePtr) != true)
        {
            fgets(row, maxchar, rePtr);

            token = strtok(row,",");
            int count = 0;
            while(token != NULL){
                sudomat[i][count] = atoi(token);
                token = strtok(NULL,",");
                count = count+1;
            }
            i = i+1;
        }   
        setReadSudoku(i);
    }
    fclose(rePtr);
}

extern void writeSudoku(){
    wrPtr = fopen("..\\file\\dataop\\sudo.txt","w");
    fclose(wrPtr);

    wrPtr = fopen("..\\file\\dataop\\sudo.txt","a");
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            fprintf(wrPtr,"%d,",sudomat[i][j]);
        }
        fprintf(wrPtr,"\n");
    }

    fclose(wrPtr);
    printf("\nFile printed successfully.");
}
