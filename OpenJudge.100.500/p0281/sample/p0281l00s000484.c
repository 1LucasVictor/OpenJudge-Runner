#include<stdio.h>
#define N 500
static const int INFTY = (1<<21);
int main(){
  int t,i,j,f,q,x,y,sum,minv;
  int A[N][N],d[N],r[N];

  scanf("%d",&t);
  for(i=0;i<t;i++){
    for (j=0;j<t;j++){
      A[i][j]=INFTY;
    }
  }
  for(i=0;i<t;i++){
    scanf("%d %d",&f,&x);
    for (j=0;j<x;j++){
      scanf("%d %d",&q,&y);
      A[f][q]=y; }
  }
  for(i=0;i<t;i++){
    d[i]=INFTY;
    r[i]=0;
  }
  d[0]=0;
  while(1){
    minv=INFTY;
    f=-1;
    for(i=0;i<t;i++){
      if(minv>d[i]&&!r[i]){
	f=i;
	minv=d[i];}
    }
    if(f==-1)
      break;
    r[f]=1;
    for(q=0;q<t;q++){
      if(!r[q]&&A[f][q] != INFTY){
	if(d[q]>d[f]+A[f][q]){
	  d[q]=d[f]+A[f][q];
	}
      }
    }
  }
  for (i=0; i<t; i++){
    printf("%d %d",i,(d[i]==INFTY?-1:d[i]));
    printf("\n");
  }
  
  return 0;
}

