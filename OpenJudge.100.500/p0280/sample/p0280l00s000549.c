#include<stdio.h>
#define IN 2000

int main()
{
  int n,i,j,k,minj,min,total=0;
  int A[101][101];
  int a[101];
  int flag[101];
  
  scanf("%d",&n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      
      scanf("%d",&A[i][j]);
    }
  }

  for(i=0; i<n; i++){
    a[i] = IN;
    flag[i] = 0;
  }
  a[0] = 0;
  

  for(i=0; i<n-1; i++){
    min = IN;
    for(j=0; j<n; j++){
      if(a[j] < min && flag[j] == 0){
	min = a[j];
	minj = j;
      }
    }

    flag[minj] = 1;

    for(k = 0; k<n; k++){
      if((A[minj][k]<a[k]) && (A[minj][k] != -1) && (flag[k] == 0)){
	a[k] = A[minj][k];
      }
    }
  }
  
  for(i=0; i<n; i++){
    total += a[i];
  }
  
  printf("%d\n",total);
  return 0;
}

