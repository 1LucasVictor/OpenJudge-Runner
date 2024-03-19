#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#define N 100
int G[N][N];

int main(){
  int n ,i ,j,k,ver,edg,fff;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&ver,&edg);
    for(j=0;j<edg;j++){
      scanf("%d",&fff);
      G[i][fff-1]=1;
    } 
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
	printf("%d",G[i][j]);
      if(j<n-1)
	printf(" ");
    }
    printf("\n");
  }
  return 0;
}