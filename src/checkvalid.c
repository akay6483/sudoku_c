#include "common.h"

bool isBoardValid(){
    bool rows[30][30] = {false};
    bool cols[30][30] = {false};
    bool subgrid[30][30] = {false};

    for(int i = 0; i<N; i++){
        for(int j=0; j<N; j++){
            int curr = sudomat[i][j];

            if(curr==0){
                continue;
            }

            int subIndx = (i/SRN) * SRN + j / SRN;
            
            if(rows[i][curr] || cols[j][curr] || subgrid[subIndx][curr]){
                return false;
            }

            rows[i][curr] = true;
            cols[j][curr] = true;
            subgrid[subIndx][curr] = true;
        }
    }
    return true;
}

bool isSudokuValid(){
    bool rows[30][30] = {false};
    bool cols[30][30] = {false};
    bool subgrid[30][30] = {false};

    for(int i = 0; i<N; i++){
        for(int j=0; j<N; j++){
            int curr = sudomat[i][j];

            if(curr==0){
                return false;
            }

            int subIndx = (i/SRN) * SRN + j / SRN;
            
            if(rows[i][curr] || cols[j][curr] || subgrid[subIndx][curr]){
                return false;
            }

            rows[i][curr] = true;
            cols[j][curr] = true;
            subgrid[subIndx][curr] = true;
        }
    }
    return true;
}

extern void checkBoardValid(){
    if(isBoardValid()){
        printf("Board is valid.");
    }
    else{
        printf("Board is not valid.");
    }
}

extern void checkSudokuValid(){
    if(isSudokuValid()){
        printf("Solution is valid.");
    }
    else{
        printf("Solution is invalid.");
    }
}
