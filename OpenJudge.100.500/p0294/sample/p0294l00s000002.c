#include<stdio.h>
#define N 36

int main(){
  int i, j, s, a, b, minj, tempi, flag = 0;
  char c, tempc;
  char A[N], X[N];
  int B[N], Y[N];

  scanf("%d",&s);
  for(i = 0; i < s; i++){
    scanf(" %c",&A[i]);
    scanf("%d",&B[i]);
    X[i] = A[i];
    Y[i] = B[i];
  }

  for(i = 0; i < s; i++){
    for(j = s - 1; j > i; j--){
      if(B[j] < B[j-1]){
	tempi = B[j];
	tempc = A[j];
	B[j] = B[j-1];
	A[j] = A[j-1];
	B[j-1] = tempi;
	A[j-1] = tempc;
      }
    }
  }
  for(i = 0; i < s; i++){
    printf("%c%d",A[i],B[i]);
    if(i != s - 1) printf(" ");
  }
  printf("\n");

  for(i = 0; i < s; i++){
    for(j = i + 1; j < s; j++){
      for(a = 0; a < s; a++){
	for(b = a + 1; b < s; b++){
	  if(Y[i] == Y[j] && X[i] == A[b] && X[j] == A[a]) flag = 1;
	}
      }
    }
  }
  if(flag = 1)  printf("Stable\n");
  else printf("Not stable\n");
  
  flag = 0;
  for(i = 0; i < s; i++){
    A[i] = X[i];
    B[i] = Y[i];
  }

  for(i = 0; i < s; i++){
    minj = i;
    for(j = i; j < s; j++){
      if(B[j] < B[minj]) minj = j;
    }
    tempi = B[i];
    tempc = A[i];
    B[i] = B[minj];
    A[i] = A[minj];
    B[minj] = tempi;
    A[minj] = tempc;
  }
  for(i = 0; i < s; i++){
    printf("%c%d",A[i],B[i]);
    if(i != s - 1) printf(" ");
  }
  printf("\n");
  for(i = 0; i < s; i++){
    for(j = i + 1; j < s; j++){
      for(a = 0; a < s; a++){
	for(b = a + 1; b < s; b++){
	  if(Y[i] == Y[j] && X[i] == A[b] && X[j] == A[a]) flag = 1;
	}
      }
    }
  }
  if(flag == 0) printf("Stable\n");
  else printf("Not stable\n");

  return 0;
}