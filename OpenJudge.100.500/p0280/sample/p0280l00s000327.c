#include<stdio.h>

#define Max 100

int main(){
  int i, j, n, A[Max][Max], min, total = 0;

  scanf("%d",&n);
  
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d",&A[i][j]);
    }
  }

  for(i = 1; i < n; i++){
     min = A[i][0];
    for(j = 0; j < n; j++){
      if(A[i][j] != -1){
	if(min == -1) min = A[i][j];
	else if(A[i][j] < min) min = A[i][j];
      }
    }
    total += min;
  }

  printf("%d\n",total);

  return 0;
}