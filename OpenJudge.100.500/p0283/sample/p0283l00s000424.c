#include <stdio.h>

void putQueen(int);
void printBoard();
void Sort(int *,int *);

#define N 8
#define FREE 0
#define NOT_FREE 1

int row[N] = {}; //行
int col[N] = {}; //列
int dpop[15] = {}; //対角線上に女王がいないことを意味する0
int dneg[15] = {};
int input_row[8];
int input_col[8];
int k;

int main() {
  int i;
  int r,c;

  scanf("%d",&k);
  for(i=0;i<k;i++) {
    scanf("%d %d",&r,&c);
    input_row[i] = r;
    input_col[i] = c;
    row[r] = c;
    col[c] = NOT_FREE;
    dpop[r+c] = NOT_FREE;
    dneg[r-c+N-1] = NOT_FREE;
  }
  Sort(input_row,input_col);
  /*for(i=0;i<k;i++) {
    printf("%d , %d\n",input_row[i],input_col[i]);
  }*/
  putQueen(0);

  //printBoard();

  return 0;
}

void putQueen(int i) {
  int j;
  int s,t;
  int count=0;

  if(i==N) {
    printBoard();
    //printf("\n");
    return;
  }

  for(s=0;s<k;s++) { //指定したクイーンの位置は動かさない
    if(i == input_row[s]) { //指定したクイーンの位置が移動してる
      //printf("%d -> %d : %d\n",i,input_col[s],row[i]);
      //printf("%d : check\n",i);
      i++; //単純にiを一つずらすだけではダメ？
      if(i==N) {
        printBoard();
        return;
      }
      //backtrack
      //col[j] = dpop[i+j] = dneg[i-j+N-1] = FREE;
    }
  }

    for(j=0;j<N;j++) {
      //can't put
      //if((i==0 && j==0)|| (i==N-1 && j==0)) continue;
      //printf("(i,j) = (%d,%d) : %d , %d , %d\n",i,j,col[j],dpop[i+j],dneg[i-j+N-1]);
      //printf("(i,j) = (%d,%d) : %d , %d , %d\n",i,j,col[j],dpop[i+j],dneg[i-j+N-1]);
      if(col[j] == NOT_FREE || dpop[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE) {
        //printf("%d ; %d\n",i,j);
        continue;
      }
      row[i] = j; //その行の何列目にQueenを入れるか、都度更新
      col[j] = dpop[i+j] = dneg[i-j+N-1] = NOT_FREE;

      //NEXT
      putQueen(i+1);
      //backtrack
      col[j] = dpop[i+j] = dneg[i-j+N-1] = FREE;
      //printf("・・・(i,j) = (%d,%d) : %d , %d , %d\n",i,j,col[j],dpop[i+j],dneg[i-j+N-1]);
      //printf("///(i,j) = (%d,%d) : %d , %d\n",i,j,dpop[i+j],dneg[i-j+N-1]);
    }
}

void printBoard() {
  int i,j;
  for(i=0;i<N;i++) {
    for(j=0;j<N;j++) {
      if(j == row[i]) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void Sort(int *array,int *A) {
  int tmp;
  int tmp2;
  int i,j;

  for(j=1;j<k;j++) {
    tmp = array[j];
    tmp2 = A[j];
    //i=j-1;
    for(i=j-1;i>=0;i--) {
      if(array[i+1]<array[i]) {
        array[i+1] = array[i];
        array[i] = tmp;
        A[i+1] = A[i];
        A[i] = tmp2;
      }
    }
  }

}

