#include<stdio.h>

#define MAX 100

int A[MAX][MAX],G[MAX];
void DJP(int);

int main(){
  int n,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);
    }
  }

DJP(n);
  return 0;
}

void DJP(int n){
  int i,j,a=1,size,min,out=0;;
  int B[MAX];
  B[0]=0;
  G[0]=1;
  for(i=1;i<n;i++){
    G[i]=0;
  }
  while(1){
    size=2001;
    for(i=0;i<a;i++){
      for(j=0;j<n;j++){
        if(A[B[i]][j]<size&&A[B[i]][j]!=-1&&G[j]!=1){
          size=A[B[i]][j];
          min=j;
        }
      }
    }
    if(a!=n){
      B[a]=min;
      G[min]=1;
      out+=size;
      a++;
    }
    else break;
  }
  printf("%d\n",out);
}

