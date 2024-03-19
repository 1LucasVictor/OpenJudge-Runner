/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Mu-Chan
 *
 * Created on August 2, 2018, 2:08 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

void putQueen(int,int[],int[],int[],int[],int[]);
void printBoard(int[]);

int main(int argc, char** argv) {
    int queenPosRow[SIZE], colTaken[SIZE], skip[SIZE], dposTaken[SIZE*2 - 1], dnegTaken[SIZE*2 - 1];
    int count, i, j;
    for(int i = 0; i < SIZE; i++){
        skip[i] = 0;
        queenPosRow[i] = -1;
        colTaken[i] = 0;
    }
    for(i = 0; i < SIZE*2 - 1; i++){
        dposTaken[i] = 0;
        dnegTaken[i] = 0;
    }
    scanf("%d",&count);
    for(int c = 0; c < count; c++){
        scanf("%d %d", &i, &j);
        queenPosRow[i] = j;
        skip[i] = 1;
        colTaken[j] = 1;
        dposTaken[i+j] = 1;
        dnegTaken[i-j+SIZE-1] = 1;
    }
    putQueen(0,queenPosRow,colTaken,skip,dposTaken,dnegTaken);
    return (EXIT_SUCCESS);
}

void putQueen(int c, int queenPosRow[SIZE], int colTaken[SIZE], int skip[SIZE], int dposTaken[SIZE*2 - 1], int dnegTaken[SIZE*2 - 1]){
    if(c == SIZE){
        printBoard(queenPosRow);
        return;
    }
    if(!skip[c]){
        for(int j = 0; j < SIZE; j++)
            if(!colTaken[j]&&!dposTaken[c+j]&&!dnegTaken[c-j+SIZE-1]){
                queenPosRow[c] = j;
                colTaken[j] = 1;
                dposTaken[c+j] = 1;
                dnegTaken[c-j+SIZE-1] = 1;
                putQueen(c+1,queenPosRow,colTaken,skip,dposTaken,dnegTaken);
                colTaken[j] = 0;
                dposTaken[c+j] = 0;
                dnegTaken[c-j+SIZE-1] = 0;
            }
    }
    else
        putQueen(c+1,queenPosRow,colTaken,skip,dposTaken,dnegTaken);
    return;
}

void printBoard(int row[SIZE]){
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if(row[i] == j)
                printf("Q");
            else
                printf(".");
        }
        printf("\n");
    }
}

