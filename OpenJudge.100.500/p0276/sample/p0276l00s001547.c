#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#define ms(l,n,s) memset(l,n,s)
#define m(l,n) (l*)malloc(n*sizeof(l))
void insert(int**,int,int,int);
void print(int**,int);
int main(){
  int n,u,k,v;
  int i,j;
  int **matrix;
  scanf("%d",&n);
  matrix=m(int*,(n+1));
  for(i=0;i<n+1;i++){
    *(matrix+i)=m(int,(n+1));
    ms(*(matrix+i),0,sizeof(int));
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      *(*(matrix+u)+v)=1;
    }
}
  print(matrix,n);
  return 0;
}
void print(int **matrix,int n){
  int i;
  int j;
  for(i=1;i<n+1;i++){
    for(j=1;j<n+1;j++)printf("%d%c",*(*(matrix+i)+j),j<n?' ':'\n');
  }
}

