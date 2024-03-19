#include<stdio.h>

int funk(int);

int A[100][100],B[100],C[100];

int main() {
  int x,i,j;

  scanf("%d",&x);
  for(i = 0; i < x; i++) {
    for(j = 0; j < x; j++) {
      scanf("%d",&A[i][j]);
    }
  }

  printf("%d\n",funk(x));

  return 0;
}

int funk(int x) {
  int i,j,k = 1,min,minp,sum = 0;

  B[0] = 0;
  C[0] = 1;

  for(i = 1; i < x; i++) {
    C[i] = 0;
  }

  while(1) {
    min = 2001;
    for(i = 0; i < k; i++) {
      for( j = 0; j < x; j++) {
	if(A[B[i]][j] < min && A[B[i]] [j] != -1 && C[j] != 1) {
	  min = A[B[i]][j];
	  minp = j;
	}
      }
    }

    if(k == x) {
      break;
    }

    B[k] = minp;
    C[minp] = 1;
    sum += min;
    k++;
  }

  return sum;
}
	    
      

