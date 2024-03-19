/* 
 * File:   main.c
 * Author: s1252005
 *
 * Created on July 27, 2018, 12:09 PM
 */

#include <stdio.h>
#include <stdlib.h> 
int matrix[8][8];  
int coldf[8], rowdf[8];
int dpos[15],dneg[15];
void recursive(int i);
void printboard();
int main(int argc, char** argv) {
   

    int number;
    scanf("%d", &number);
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            matrix[i][j]=0;
        }
    }
    for(int i=0;i<8;i++)
    {
        coldf[i]=0;
        rowdf[i]=0;
    }
    for(int i=0;i<15;i++)
    {
        dpos[i] = 0;
        dneg[i] = 0;
    }
    int row ,col;
    for(int i=0;i<number;i++)
    {
        scanf("%d %d",&row,&col);
        matrix[row][col] =1;
    }
     recursive(0);

    return (EXIT_SUCCESS);
}


void recursive(int i)
{
  int j;

  if(i == 8)
  {
    printboard();
    return;
  }

  for(j=0;j<8;j++){
    if(coldf[j]==1 || dpos[i+j]==1|| dneg[i-j+7]==1)
        continue;
    rowdf[i] =j;
    coldf[j] = dpos[i+j] = dneg[i-j+7] = 1;
    recursive(i+1);
    rowdf[i] = coldf[j] = dpos[i+j] = dneg[i-j+7] = 0;
  }
}


void printboard()
{
  int i,j;

  for(i=0;i<8;i++)
    for(j=0;j<8;j++)
      if(matrix[i][j] == 1){
	if(rowdf[i] != j)
            return;
      }
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(rowdf[i] == j)
          printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

