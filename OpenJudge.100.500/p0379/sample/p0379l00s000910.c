#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int i,j,m,n;
  int **matrix,*b;
  int tmp;
  /* - - - get data - - -*/
  //for matrix
  scanf("%d %d", &n, &m);
  matrix=(int **)malloc(sizeof(int *)*n);
  for(i=0; i<n; i++){
    matrix[i]=(int *)malloc(sizeof(int)*m);
    for(j=0; j<m; j++){
      scanf("%d", &matrix[i][j]);
    }
  }
  //for vector
  b=(int *)malloc(sizeof(int)*m);
  for(i=0; i<m; i++)
    scanf("%d", &b[i]);
  /* - - - calc - - -*/
  for(i=0; i<n; i++){
    tmp=0;
    for(j=0; j<m; j++)
      tmp+=matrix[i][j]*b[j];
    printf("%d\n", tmp);
  }
  //show
  return(0);
}

