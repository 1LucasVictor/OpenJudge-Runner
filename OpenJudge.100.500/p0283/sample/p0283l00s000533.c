#include <stdio.h>
#define FREE 1
#define NOT_FREE -1
#define N 8

void putQueen(int);
void Printboard();

int row[N], col[N], dpos[2*N], dneg[2*N], n, tate[N], yoko[N], x[N];


int main() {
  int i = 0, p = 0, q = 0;

  scanf("%d",&n);

  for(i = 0 ; i< N ; i++) x[i] = -1;

  for(i = 0 ; i < n ; i++) {
    scanf("%d %d",&p,&q);

    tate[i] = p;
    yoko[i] = q;

    x[p] = q;
      
    /*row[p] = q;
    col[q] = NOT_FREE;
    dpos[p+q] = NOT_FREE;
    dneg[p-q+N-1] = NOT_FREE;*/
  }
  

  putQueen(0);
  
  return 0;
}


void putQueen(int i) {
  int j = 0, k = 0;

  /*if(i == 0) {
    for(k = 0 ; k < n ; k++) {
      row[tate[k]] = yoko[k];
      col[yoko[k]] = NOT_FREE;
      dpos[tate[k]+yoko[k]] = NOT_FREE;
      dneg[tate[k]-yoko[k]+N-1] = NOT_FREE;
    }
    }*/

  
  if(i == N) {
    Printboard();
    return;
  }

  /*for(k = 0; k< n ; k++) {
    if(yoko[k] == i) {
      printf("tate: %d yoko: %d\n",tate[k],yoko[k]);
      putQueen(i+1);
      return;
    }
    }*/

  for(j = 0 ; j < N ; j++) {

    if(x[i] != -1 && x[i] != j) {
      continue;
    }
    /* for(k = 0 ; k < n ; k++) {
      row[tate[k]] = yoko[k];
      col[yoko[k]] = NOT_FREE;
      dpos[tate[k]+yoko[k]] = NOT_FREE;
      dneg[tate[k]-yoko[k]+N-1] = NOT_FREE;
      }*/


    
    
    if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE) {
      //printf("donot j: %d i: %d\n",j,i);
      continue;
      
    }



    row[i] = j;
    col[j] = NOT_FREE;
    dpos[i+j] = NOT_FREE;
    dneg[i-j+N-1] = NOT_FREE;

    putQueen(i+1);

    col[j] = FREE;
    dpos[i+j] = FREE;
    dneg[i-j+N-1] = FREE;
    
  }

}


void Printboard() {
  int i = 0, j = 0, ban[N][N];
  
  for(i = 0 ; i < N ; i++) {
    for(j = 0 ; j < N ; j++) {
      ban[i][j] = 0;
    }
  }
  
  for(i = 0 ; i < N ; i++) {
    ban[i][row[i]] = 1;
  }

  for(i = 0 ; i < N ; i++) {
    for(j = 0 ; j < N ; j++) {
      if(ban[i][j] == 1) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

