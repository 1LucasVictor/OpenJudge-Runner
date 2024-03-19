#include<stdio.h>

int main(){

  int N[100][100];
  int K[100];
  int T[100];
  int i,j,k=0,num;

  scanf("%d",&num);

  for(i=0; i<num; i++)
    K[i] = 100;

  for(i=0; i<num; i++){
    for(j=0; j<num; j++){
      scanf("%d",&N[i][j]);
      if(K[i] > N[i][j] && N[i][j]!=-1 /*|| T[i] != j*/){
	K[i] = N[i][j];
	T[i] = i;
      }
    }
  }

  for(i=0; i<num; i++)
    k += K[i];

  printf("%d\n",k-1);

  return 0;
}