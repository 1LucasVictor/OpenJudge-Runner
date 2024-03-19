/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: kundaikwangwari
 *
 * Created on August 1, 2019, 8:38 AM
 */

#include <stdio.h>
#include <stdlib.h>
#define Free -1
#define Not_Free -2
#define Queens 8
#define Valid 1
/*
 * 
 */

int Col[Queens], Board[Queens][Queens],Row[Queens],drop[Queens*2 - 1],dneg[Queens*2 - 1];

void DisplayAns(){
    
    for(int i = 0; i < Queens; i++){
        for(int j = 0; j < Queens; j++){
            if(Board[i][j] == Valid){
                if(Row[i] != j)return;
            }
        }
    }
    
    for(int i = 0; i < Queens; i++){
        for(int j = 0; j < Queens; j++){
            if(Row[i] == j)printf("Q");
            else printf(".");
        }
        printf("\n");
    }
return;
}

void PutQueen(int pos){
    
    if(pos == Queens){
        DisplayAns();
        return;
    }
    
    for(int j = 0; j < Queens; j++){
        if((Col[j] == Not_Free) || (drop[pos + j] == Not_Free)
                || (dneg[pos - j + Queens - 1] == Not_Free))continue;
        
        Row[pos] = j;
        Col[j] = drop[pos + j] = dneg[ pos - j + Queens - 1] = Not_Free;
        
        PutQueen(pos + 1);
        
        Row[pos] = Col[j] = drop[pos + j] = dneg[pos - 1 + Queens - j] = Free;
        
    }
}


int main(int argc, char** argv) {

    
    for(int i = 0; i < Queens; i++){
        for(int j = 0; j < Queens; j++)Board[i][j] = 0;
    }
    
    for(int i = 0; i < Queens; i++){
        Col[i] = Free;
        Row[i] = Free;
    }
    
    for(int i = 0; i < Queens*2 - 1; i++){
        drop[i] = Free;
        dneg[i] = Free;
    }
    int n;
    scanf("%d",&n);
    int x[n], y[n];
    for(int i = 0; i < n; i++){
        scanf("%d %d",&x[i],&y[i]);
        //printf("%d %d\n",x[i],y[i]);
        Board[x[i]][y[i]] = Valid;
        //printf("board[%d][%d] is %d\n",x[i],y[i],Board[x[i]][y[i]]);
    }
    
    PutQueen(0);
    return (0);
}


